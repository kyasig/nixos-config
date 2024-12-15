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
      page-padding = 1;
      adjust-open = "best-fit";
      selection-clipboard = "clipboard";
    };
  };
}
