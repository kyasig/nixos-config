{ config, lib, pkgs, ...}:
{
  imports = [
    ../picom.nix
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
    xmobar
  ];
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;
  home.file.".config/xmobar/catppuccin-mocha-xmobarrc".source = ./catppuccin-mocha-xmobarrc;

}
