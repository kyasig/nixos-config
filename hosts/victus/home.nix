{pkgs, ...}:
{
  imports = [
    ../../home-manager/default.nix
  ];
  home.packages = with pkgs; [
    obs-studio
    vesktop
    telegram-desktop
    freetube
    gimp
    mousam
    vlc
    thunderbird
    chromium
  ];
}
