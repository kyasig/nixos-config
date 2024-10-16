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
  outputs ={self, nixpkgs, ... }@inputs:
  let
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};
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
            #./nixos/default.nix
            ./hosts/victus/default.nix
          inputs.home-manager.nixosModules.home-manager
          {
            home-manager = {
              useGlobalPkgs = true;
              useUserPackages = true;
              backupFileExtension = ".bak";
              extraSpecialArgs = {
                inherit user host inputs;
              };
              users.${user} = {
                imports = [
                  inputs.nixvim.homeManagerModules.nixvim
                  ./hosts/victus/home.nix
                ];
              };
            };
          }
        ];
      };
      vm = lib.nixosSystem{
        inherit system;
        specialArgs = {
          inherit self user inputs ;
        };
        modules = [
          ./hosts/vm/default.nix
          inputs.home-manager.nixosModules.home-manager
          {
            home-manager = {
              useGlobalPkgs = true;
              useUserPackages = true;
              extraSpecialArgs = {
                inherit user host inputs;
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
