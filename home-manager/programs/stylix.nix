{ config, lib, pkgs, font, fontpkg, ... }:
{
  stylix = {
    image = ./bliss.jpg;
    autoEnable = true;
    polarity = "dark";
    fonts = {
      monospace = {
        name = font;
        package = fontpkg;
      };
    };
  };
  programs.feh.enable = true;
}
