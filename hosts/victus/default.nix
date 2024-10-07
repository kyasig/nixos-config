{pkgs, host,...}:
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
  networking.hostName = "${host}";

  services.udev.packages = with pkgs; [
    platformio-core.udev
    android-udev-rules
  ];
}
