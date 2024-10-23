{ pkgs, ... }:
{
  imports = [
    ../../nixos/default.nix
  ];

  nvidia.enable = true;

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
    platformio-core.udev
    android-udev-rules
  ];
  environment = {
    systemPackages = with pkgs; [
      cups-toshiba-estudio
      cups-filters
    ];
  };
}
