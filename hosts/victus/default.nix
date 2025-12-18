{ pkgs, ... }:
{
  imports = [
    ../../nixos/default.nix
    ./hardware-configuration.nix
  ];

  nvidia.enable = false;

  stylix = {
    enable = true;
    base16Scheme = "${pkgs.base16-schemes}/share/themes/kanagawa.yaml";
    image = ../../home-manager/wall.jpg;
  };

  hardware = {
    cpu.amd.updateMicrocode = true;
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

  i18n.inputMethod.type = "ibus";
  i18n.inputMethod.ibus.engines = with pkgs.ibus-engines; [ libpinyin ];

  services.udev.packages = with pkgs; [
    #platformio-core.udev
  ];
  environment = {
    systemPackages = with pkgs; [
      #cups-toshiba-estudio
      #cups-filters
      #canon-cups-ufr2
    ];
  };
}
