{
  description = "kyasig's nixos flake";
  inputs = {
    nixpkgs.url = "github:NixOs/nixpkgs/nixos-23.11";
    
    home-manager = {
      url = "github:nix-community/home-manager/release-23.11";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    firefox-addons = {
      url = "gitlab:rycee/nur-expressions?dir=pkgs/firefox-addons";
      inputs.nixkpgs.follows = "nixpkgs";
    };

    nix-colors = {
      url = "github:misterio77/nix-colors";
    };

    stylix.url = "github:danth/stylix";
  };
  outputs = inputs @{
    self,
    nixpkgs,
    stylix,
    home-manager, 
    ...
  }: let
    system = "x86_64-linux";
    inherit (nixpkgs) lib;
    pkgs = nixpkgs.legacyPackages.${system};
    font = "mononoki";
    fontpkg = pkgs.mononoki;
    nvidia = true;
    user = "ky";
  in{
    nixosConfigurations = {
      sig = lib.nixosSystem{
        inherit system;
        modules = [./nixos/default.nix];
      };
    };
    homeConfigurations = {
      ky = home-manager.lib.homeManagerConfiguration{
        inherit pkgs;
        modules = [
        stylix.homeManagerModules.stylix
        ./home-manager/default.nix
        ];
      extraSpecialArgs = {
        inherit inputs;
        inherit font;
        inherit fontpkg;
      };
      };
    };
  };
}
