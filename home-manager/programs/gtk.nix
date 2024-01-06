{ config, pkgs, inputs, ...}:
{
  gtk = {
    enable = true;
    theme = {
      name = "Catppuccin-Macchiato-Compact-Pink-Dark";
      package = pkgs.catppuccin-gtk.override{
        accents = ["pink"];
        variant = "mocha";
      };
    };
  };
}
