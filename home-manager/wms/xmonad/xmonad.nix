{ config, lib, pkgs, ...}:
{
  imports = [
    ../picom/picom.nix
    ../../programs/rofi/rofi.nix
    ../../programs/alacritty.nix
  ];
  home.packages = with pkgs;[
    brillo
    xorg.xbacklight # crying 
    feh # using this as an image viewer xd 
    flameshot
    nitrogen
    pcmanfm
    trayer
    xdotool
    xmobar
  ];
#  services.picom.enable = true;
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;
  home.file.".config/xmobar/catppuccin-mocha-xmobarrc".source = ./catppuccin-mocha-xmobarrc;
}
