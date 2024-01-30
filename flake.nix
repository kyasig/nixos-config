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
<<<<<<< HEAD
=======

    stylix.url = "github:danth/stylix";
>>>>>>> 44b0f76efbcb5990e69832570c2d7794dfb23211
  };
  outputs = inputs @{
    self,
    nixpkgs,
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
<<<<<<< HEAD
    hostname = "sig";
    scheme = "catppuccin-mocha";
#    scheme = "solarized-dark";
  in{
    nixosConfigurations = {
      ${hostname} = lib.nixosSystem{
=======
  in{
    nixosConfigurations = {
      sig = lib.nixosSystem{
>>>>>>> 44b0f76efbcb5990e69832570c2d7794dfb23211
        inherit system;
        modules = [./nixos/default.nix];
      };
    };
    homeConfigurations = {
<<<<<<< HEAD
      ${user} = home-manager.lib.homeManagerConfiguration{
        inherit pkgs;
        modules = [
        ./home-manager/default.nix
        ];
        extraSpecialArgs = {
          inherit inputs;
          inherit font;
          inherit fontpkg;
          inherit scheme;
        };
=======
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
>>>>>>> 44b0f76efbcb5990e69832570c2d7794dfb23211
      };
    };
  };
}
