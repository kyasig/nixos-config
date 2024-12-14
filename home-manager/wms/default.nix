{ config, pkgs, ... }:
let
  setbg = pkgs.writeShellApplication {
    name = "setbg";
    text = ''
      wallpaper=~/nixos-config/home-manager/wall.jpg

      set +u
      if [ -n "$1" ];then
          cd ~/Pictures/Wallpapers
          wallpaper=$(fd -t f | fzf)
          cp "$wallpaper" ~/nixos-config/home-manager/wall.jpg
      fi
      xwallpaper --zoom "$wallpaper"
    '';
  };
in
{
  imports = [
    ./xmobar.nix
    ./picom.nix
  ];
  home.packages =
    with pkgs;
    [
      brillo
      brightnessctl
      feh # using this as an image viewer xd
      flameshot
      scrot
      pcmanfm
      xdotool
      xwallpaper
    ]
    ++ [ setbg ];

  xsession.windowManager.xmonad = {
    enable = true;
    enableContribAndExtras = true;
    config = ./xmonad.hs;
    #config.lib.stylix.colors
    libFiles = {
      "Colors.hs" = pkgs.writeText "Colors.hs" ''
        module Colors where

        import XMonad

        color00 = "#${config.lib.stylix.colors.base00}"
        color01 = "#${config.lib.stylix.colors.base01}"
        color02 = "#${config.lib.stylix.colors.base02}"
        color03 = "#${config.lib.stylix.colors.base03}"
        color04 = "#${config.lib.stylix.colors.base04}"
        color05 = "#${config.lib.stylix.colors.base05}"
        color06 = "#${config.lib.stylix.colors.base06}"
        color07 = "#${config.lib.stylix.colors.base07}"
        color08 = "#${config.lib.stylix.colors.base08}"
        color09 = "#${config.lib.stylix.colors.base09}"
        color0A = "#${config.lib.stylix.colors.base0A}"
        color0B = "#${config.lib.stylix.colors.base0B}"
        color0C = "#${config.lib.stylix.colors.base0C}"
        color0D = "#${config.lib.stylix.colors.base0D}"
        color0E = "#${config.lib.stylix.colors.base0E}"
        color0F = "#${config.lib.stylix.colors.base0F}"
      '';
    };
  };
}
