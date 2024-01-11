{ config, lib, pkgs, ...}:
{
  imports = [
    ../picom.nix
    ./xmobar.nix
    ../../programs/rofi.nix
    ../../programs/alacritty.nix
  ];
  home.packages = with pkgs;[
    brillo
    feh # using this as an image viewer xd 
    flameshot
    nitrogen
    pcmanfm
    trayer
    xdotool
  ];
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;
  home.file.".config/xmonad/lib/Colors/CatppuccinMocha.hs".source = ./lib/Colors/CatppuccinMocha.hs;

  programs.xmobar.enable = true;
}
