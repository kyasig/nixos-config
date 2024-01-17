{ config, libs, pkgs, ...}:
{
  services.xserver.enable = true;
  services.xserver.windowManager.xmonad = {
        enable = true;
        enableContribAndExtras = true;
  };
#  services.xserver.windowManager.qtile.enable = true;
  services.xbanish.enable = true;

  services.xserver.displayManager.sessionCommands = ''
    xset -dpms  # Disable Energy Star, as we are going to suspend anyway and it may hide "success" on that
    xset s blank # `noblank` may be useful for debugging 
    xset s 300 # seconds
    ${pkgs.lightlocker}/bin/light-locker --idle-hint &
  '';

  systemd.targets.hybrid-sleep.enable = true;
  services.logind.extraConfig = ''
    IdleAction=hybrid-sleep
    IdleActionSec=20s
  '';
  services.xserver.libinput.enable = true; #trackpad support
  services.xserver.xkb.layout = "us";
}
