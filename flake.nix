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
      inputs.nixpkgs.follows = "nixpkgs";
    };
    nix-colors.url = "github:misterio77/nix-colors";
    nixvim = {
      url = "github:nix-community/nixvim";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    nixmobar.url = "git+https://codeberg.org/xmobar/xmobar.git/?dir=nix";
  };
  outputs =
    { self, nixpkgs, ... }@inputs:
    let
      system = "x86_64-linux";
      pkgs = import inputs.nixpkgs {
        inherit system;
        config.allowUnfree = true;
      };
      user = "ky";
      mkNixosConfig =
        host: conf: home:
        lib.nixosSystem {
          inherit pkgs;
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
                    inputs.nixmobar.homeModules.mainmodule
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
