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
  #home.file.".config/xmonad/lib/Colors/stylix.hs".source =./lib/Colors/stylix.hs;

  home.file.".config/xmonad/lib/Colors/Stylix.hs".source = config.lib.stylix.colors {
    template = builtins.readFile ./lib/Colors/Stylix.hs;
    extension = ".hs";
  };

  home.file.".config/xmobar/xmobarrc".source = config.lib.stylix.colors {
    template = builtins.readFile ./xmobarrc_stylix;
    extension = "";
  };

  programs.xmobar.enable = true;
  programs.rofi.enable = true;
  programs.alacritty.enable = true;
}
