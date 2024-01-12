{ config, lib, pkgs, font, fontpkg, ... }:
{
  stylix = {
    image = ./pink.jpg;
    autoEnable = true;
    polarity = "dark";
    #base16Scheme = "${pkgs.base16-schemes}/share/themes/nord.yaml";
    base16Scheme = "${pkgs.base16-schemes}/share/themes/catppuccin-mocha.yaml";
    fonts = {
      monospace = {
        name = font;
        package = fontpkg;
      };
      serif = {
        name = "inconsolata";
        package = pkgs.inconsolata;
      };
      sansSerif = {
        name = "inconsolata";
        package = pkgs.inconsolata;
      };
      sizes = {
       terminal = 11;
       applications = 12;
       popups = 12;
       desktop = 12;
      };
    };
  };
  programs.feh.enable = true;
}
