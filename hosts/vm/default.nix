{ ... }:
{
  imports = [
    ../../nixos/default.nix
  ];

  nvidia.enable = false;

  boot = {
    loader = {
      systemd-boot = {
        enable = true;
        configurationLimit = 5;
      };
      efi.canTouchEfiVariables = true;
    };
  };
  networking.hostName = "vm";

}
