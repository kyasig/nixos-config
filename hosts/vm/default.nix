{...}:
{
  imports = [
    ../../nixos/default.nix
  ];

  nvidia.enable = false;
  boot.loader = {
    grub = {
      enable = true;
      device = "nodev";
    };
    efi = {
      canTouchEfiVariables = true;
      efiSysMountPoint = "/boot/efi";
    };
    systemd-boot.enable = false;
  };

  networking.hostName = "vm";
}
