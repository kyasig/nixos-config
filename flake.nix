{
  description = "kyasig's nixos flake";
  inputs = {
    nixpkgs.url = "github:NixOs/nixpkgs/nixos-unstable";
    home-manager = {
      url = "github:nix-community/home-manager/release-23.11";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    firefox-addons = {
      url = "gitlab:rycee/nur-expressions?dir=pkgs/firefox-addons";
    };
    nix-colors.url = "github:misterio77/nix-colors";
  };
  outputs ={
    self,
    nixpkgs,
    home-manager,
    nix-colors,
    firefox-addons,
    ...
  }@inputs:
  let
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};
    font = "mononoki";
    fontpkg = pkgs.mononoki;
    nvidia = true;
    user = "ky";
    host = "sig";
    inherit (nixpkgs) lib;
  in{
    nixosConfigurations = {
      ${host} = lib.nixosSystem{
        inherit system;
        modules = [./nixos/default.nix];
        specialArgs = {
          inherit host;
          inherit user;
        };
      };
    };
    homeConfigurations = {
      ${user} = home-manager.lib.homeManagerConfiguration{
        inherit pkgs;
        modules = [
        ./home-manager/default.nix
        ];
      extraSpecialArgs = {
        inherit user;
        inherit host;
        inherit inputs;
        inherit font;
        inherit fontpkg;
	inherit nix-colors;
      };
      };
    };
  };
}
