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

    wfetch = {
     url = "github:iynaix/wfetch" ;
     inputs.nixpkgs.follows = "nixpkgs";
    };

    nixvim = {
      url = "github:nix-community/nixvim";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };
  outputs ={ self, nixpkgs, nix-colors,... }@inputs:
  let
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};
    font = "mononoki";
    fontpkg = pkgs.mononoki;
    user = "ky";
    host = "sig";
    inherit (nixpkgs) lib;
  in{
    nixosConfigurations = {
      ${host} = lib.nixosSystem{
        inherit system;
        specialArgs = {
          inherit self host user inputs ;
        };
        modules = [
          ./nixos/default.nix
          inputs.home-manager.nixosModules.home-manager
          {
            home-manager = {
              useGlobalPkgs = true;
              useUserPackages = true;
              extraSpecialArgs = {
                inherit user;
                inherit host;
                inherit font;
                inherit fontpkg;
                inherit inputs;
                inherit nix-colors;
              };
              users.${user} = {
                imports = [
                  inputs.nixvim.homeManagerModules.nixvim
                  ./home-manager/default.nix
                ];
              };
            };
          }
        ];
      };
    };
  };
}
