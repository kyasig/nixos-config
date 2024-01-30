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
    nitrogen
    pcmanfm
    trayer
    xdotool
    cabal-install
  ];
  home.file.".config/xmonad/xmonad.hs".source = ./xmonad.hs;

  home.file.".config/xmonad/lib/Colors/Stylix.hs".text = ''
  module Colors.Stylix where

  import XMonad
  
  color00 = "#${colorScheme.colors.base00}"
  color01 = "#${colorScheme.colors.base01}" 
  color02 = "#${colorScheme.colors.base02}" 
  color03 = "#${colorScheme.colors.base03}" 
  color04 = "#${colorScheme.colors.base04}" 
  color05 = "#${colorScheme.colors.base05}" 
  color06 = "#${colorScheme.colors.base06}" 
  color07 = "#${colorScheme.colors.base07}" 
  color08 = "#${colorScheme.colors.base08}" 
  color09 = "#${colorScheme.colors.base09}"
  color0A = "#${colorScheme.colors.base0A}" 
  color0B = "#${colorScheme.colors.base0B}" 
  color0C = "#${colorScheme.colors.base0C}" 
  color0D = "#${colorScheme.colors.base0D}" 
  color0E = "#${colorScheme.colors.base0E}" 
  color0F = "#${colorScheme.colors.base0F}" 

  '';

  programs.xmobar.enable = true;
  
}
