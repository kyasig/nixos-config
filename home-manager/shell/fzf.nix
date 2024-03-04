{ config, lib,  pkgs, ...}:
{

 programs.fzf = {
  enable = true;
  defaultOptions = [
    "--border=double"
    "--color='dark,fg:magenta'"
    "--header='ESC to quit'"
    "--pointer='→'"
  ];
  enableZshIntegration = true;
  fileWidgetCommand = "nf";
 };
}

