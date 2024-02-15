{ config, inputs, lib, pkgs, nix-colors,scheme, ...}:
let 
  colorScheme = inputs.nix-colors.colorSchemes.${scheme};
in{
  imports = [
    ./xmobar.nix
  ];
  home.packages = with pkgs;[
    brillo
    light
    feh # using this as an image viewer xd 
    flameshot
    pcmanfm
    trayer
    xdotool
    xorg.xbacklight
    cabal-install
  ];
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;

  home.file.".config/xmonad/lib/Colors/Colors.hs".text = ''
    module Colors.Colors where

    import XMonad
    
    color00 = "#${colorScheme.palette.base00}"
    color01 = "#${colorScheme.palette.base01}" 
    color02 = "#${colorScheme.palette.base02}" 
    color03 = "#${colorScheme.palette.base03}" 
    color04 = "#${colorScheme.palette.base04}" 
    color05 = "#${colorScheme.palette.base05}" 
    color06 = "#${colorScheme.palette.base06}" 
    color07 = "#${colorScheme.palette.base07}" 
    color08 = "#${colorScheme.palette.base08}" 
    color09 = "#${colorScheme.palette.base09}"
    color0A = "#${colorScheme.palette.base0A}" 
    color0B = "#${colorScheme.palette.base0B}" 
    color0C = "#${colorScheme.palette.base0C}" 
    color0D = "#${colorScheme.palette.base0D}" 
    color0E = "#${colorScheme.palette.base0E}" 
    color0F = "#${colorScheme.palette.base0F}" 

  '';

  programs.xmobar.enable = true;
  
}
