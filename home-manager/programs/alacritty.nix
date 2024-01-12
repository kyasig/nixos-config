{ pkgs, lib, config,inputs, nix-colors, ... }: 
let 
 # colorScheme = inputs.nix-colors.colorSchemes.solarized-dark;
  colorScheme = inputs.nix-colors.colorSchemes.catppuccin-mocha;
in
{
  programs.alacritty = {
    enable = true;
    settings = {
      window = {
        padding = {
          x = 10;
          y = 15;
        };
        opacity = lib.mkForce 0.77;
      };
#      font = {
#        normal.family = "mononoki";
#      };
#      colors = {
#        primary = {
#          background = "#${colorScheme.colors.base00}";
#          foreground = "#${colorScheme.colors.base05}";
#        };
#        normal = {
#          black = "#${colorScheme.colors.base00}";
#          red =  "#${colorScheme.colors.base08}";
#          green = "#${colorScheme.colors.base0B}";
#          yellow =  "#${colorScheme.colors.base0A}";
#          blue =  "#${colorScheme.colors.base0D}";
#          magenta = "#${colorScheme.colors.base06}";
#          cyan =  "#${colorScheme.colors.base0C}";
#        };
#        bright = {
#          black = "#${colorScheme.colors.base04}";
#          red =  "#${colorScheme.colors.base08}";
#          green = "#${colorScheme.colors.base0B}";
#          yellow =  "#${colorScheme.colors.base0A}";
#          blue =  "#${colorScheme.colors.base0D}";
#          magenta = "#${colorScheme.colors.base06}";
#          cyan =  "#${colorScheme.colors.base0C}";
#        };
#      };
    };
  };
 # home.file.".config/alacritty/alacritty.yml".source = ./alacritty.yml;
}
