{ config, lib,  pkgs, ...}:
{
 programs.fzf = {
  enable = true;
  enableZshIntegration = true;
  defaultOptions = [
    "--border=double"
    "--color='dark,fg:magenta'"
    "--header='ESC to quit'"
    "--pointer='→'"
  ];
  historyWidgetOptions = [
    "--border-label='╢ Shell History╟'"
    "--prompt='Search Shell History: '"
    "--height=100%"
  ];
  changeDirWidgetOptions = [
    "--border-label='╢ CD ╟'"
    "--prompt='Change Directory To: '"
    "--preview ='eza -T --level=3 {}'"
    "--height=100%"
  ];
 };
}

