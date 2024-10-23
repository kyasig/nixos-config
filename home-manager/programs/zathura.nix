{ config, ... }:
{
  programs.zathura = {
    enable = true;
    mappings = {
      K = "zoom in";
      J = "zoom out";
      p = "print";
      i = "recolor";
      u = "scroll half-up";
      d = "scroll half-down";
    };
    options = {
      default-bg = "#${config.colorScheme.palette.base00}";
      default-fg = "#${config.colorScheme.palette.base0E}";
      page-padding = 1;
      adjust-open = "best-fit";
      selection-clipboard = "clipboard";
    };
  };
}
