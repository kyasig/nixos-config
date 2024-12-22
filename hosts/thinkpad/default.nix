{ pkgs, ... }:
{
  imports = [
    ../../nixos/default.nix
    ./hardware-configuration.nix
  ];

  nvidia.enable = false;

  stylix = {
    base16Scheme = "${pkgs.base16-schemes}/share/themes/catppuccin-mocha.yaml";
    image = ../../home-manager/wall.jpg;
  };

  powerManagement.enable = true;
  services.tlp.enable = true;
  boot = {
    loader = {
      systemd-boot = {
        enable = true;
        configurationLimit = 5;
      };
      efi.canTouchEfiVariables = true;
    };
  };

}
