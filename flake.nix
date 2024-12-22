{
  description = "kyasig's nixos flake";
  inputs = {
    nixpkgs.url = "github:NixOs/nixpkgs/nixos-unstable";
    home-manager = {
      url = "github:nix-community/home-manager";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    stylix = {
      url = "github:danth/stylix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    firefox-addons = {
      url = "gitlab:rycee/nur-expressions?dir=pkgs/firefox-addons";
    };
    nix-colors.url = "github:misterio77/nix-colors";
    wfetch = {
      url = "github:iynaix/wfetch";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    nixvim = {
      url = "github:nix-community/nixvim";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };
  outputs =
    { self, nixpkgs, ... }@inputs:
    let
      system = "x86_64-linux";
      user = "ky";
      mkNixosConfig =
        host: conf: home:
        lib.nixosSystem {
          inherit system;
          specialArgs = {
            inherit
              self
              user
              inputs
              host
              ;
          };
          modules = [
            conf
            inputs.stylix.nixosModules.stylix
            inputs.home-manager.nixosModules.home-manager
            {
              home-manager = {
                useGlobalPkgs = true;
                useUserPackages = true;
                backupFileExtension = ".bak";
                extraSpecialArgs = {
                  inherit user inputs;
                };
                users.${user} = {
                  imports = [
                    inputs.nixvim.homeManagerModules.nixvim
                    home
                  ];
                };
              };
            }
          ];
        };
      inherit (nixpkgs) lib;
    in
    {
      nixosConfigurations = {
        sig = mkNixosConfig "sig" ./hosts/victus/default.nix ./hosts/victus/home.nix;
        vm = mkNixosConfig "vm" ./hosts/victus/default.nix ./hosts/victus/home.nix;
        thinkpad = mkNixosConfig "swag" ./hosts/thinkpad/default.nix ./hosts/thinkpad/home.nix;
      };
    };
}
