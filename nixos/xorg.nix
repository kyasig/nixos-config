{ lib, pkgs, ... }:
{
  services.xserver = {
    enable = true;
    windowManager = {
      xmonad = {
        enable = true;
        enableContribAndExtras = true;
        ghcArgs = [
          "-hidir /tmp"
          "-odir /tmp"
        ];
      };
      qtile.enable = false;
    };
    displayManager = {
      #lightdm.enable = false;
      #startx.enable = true;
      sessionCommands = ''
        xset -dpms  # Disable Energy Star, as we are going to suspend anyway and it may hide "success" on that
        xset s blank # `noblank` may be useful for debugging
        xset s 300 # seconds
        ${pkgs.lightlocker}/bin/light-locker --idle-hint &
      '';
    };
    resolutions = [
      {
        x = 1920; # for vms lol
        y = 1080;
      }
    ];
  };
  services.xbanish.enable = true;

  systemd.targets.hybrid-sleep.enable = true;
  services.logind.settings.Login = {
    IdleAction = "hybrid-sleep";
    IdleActionSec = 20;
  };
  services.libinput.enable = true; # trackpad support
  services.xserver.xkb.layout = "us";

  #for taffybar
  services.upower.enable = true;
  systemd.services.upower.enable = true;
}
