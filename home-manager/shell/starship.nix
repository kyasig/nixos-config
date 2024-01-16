{ config, lib,  pkgs, ...}:
let
  myStarshipSettings = { #I LOVE RICING RAAAHHHHH
    username = {
      style_user = "green bold";
      style_root = "red bold";
      format = "[$user]($style) ";
      disabled = false;
      show_always = true;
    };
    hostname = {
      ssh_only = false;
      format = "@ [$hostname](bold blue) ";
      trim_at = ".";
      disabled = false;
    };
    cmd_duration = {
      show_milliseconds = false;
      disabled = false;
      style = "bold italic red";
    };
    character = {
      success_symbol = "[➜](bold green)";
      error_symbol = "[✗](bold red)";
    };
   };
in 
{
  programs.starship = {
    enable = true;
    enableZshIntegration = true;
    settings = myStarshipSettings;
  };
}
