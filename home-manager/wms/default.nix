{ config, inputs, lib, pkgs, nix-colors, ...}:
{
  imports = [
    ./xmobar.nix
		./picom.nix
  ];
  home.packages = with pkgs;[
    brillo
    light
    feh # using this as an image viewer xd 
    flameshot
    pcmanfm
    trayer
    xdotool
    #xorg.xbacklight
    cabal-install
  ];
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;

  home.file.".config/xmonad/lib/Colors/Colors.hs".text = ''
    module Colors.Colors where

    import XMonad
    
    color00 = "#${config.colorScheme.palette.base00}"
    color01 = "#${config.colorScheme.palette.base01}" 
    color02 = "#${config.colorScheme.palette.base02}" 
    color03 = "#${config.colorScheme.palette.base03}" 
    color04 = "#${config.colorScheme.palette.base04}" 
    color05 = "#${config.colorScheme.palette.base05}" 
    color06 = "#${config.colorScheme.palette.base06}" 
    color07 = "#${config.colorScheme.palette.base07}" 
    color08 = "#${config.colorScheme.palette.base08}" 
    color09 = "#${config.colorScheme.palette.base09}"
    color0A = "#${config.colorScheme.palette.base0A}" 
    color0B = "#${config.colorScheme.palette.base0B}" 
    color0C = "#${config.colorScheme.palette.base0C}" 
    color0D = "#${config.colorScheme.palette.base0D}" 
    color0E = "#${config.colorScheme.palette.base0E}" 
    color0F = "#${config.colorScheme.palette.base0F}" 

  '';

  programs.xmobar.enable = true;
  
}
