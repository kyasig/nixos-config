{ config, pkgs, ... }:

{
  home.username = "ky";
  home.homeDirectory = "/home/ky";

  imports = [
    # chose a wm
    ./wms/xmonad/xmonad.nix
    #./wms/qtile/qtile.nix
    ./shell/sh.nix
    ./programs/firefox.nix
    ./programs/gtk.nix
  ];
  home.stateVersion = "23.11"; # dont change lol

  home.packages = with pkgs; [
    bitwarden
    dmenu
    mpv
    obs-studio
    pulsemixer
    thunderbird
    vesktop
    vlc
    vscodium
    ghc
    nuclear
  ];
  home.sessionVariables = {
     EDITOR = "nvim";
  };

  programs.home-manager.enable = true;
}
