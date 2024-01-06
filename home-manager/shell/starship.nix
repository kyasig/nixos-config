{ config, lib,  pkgs, ...}:
let
  myAliases = {
    "c" = "clear";
    "listgens" = "sudo nix-env -p /nix/var/nix/profiles/system --list-generations";
    "deletegens" = "sudo nix-env -p /nix/var/nix/profiles/system --delete-generations";
    "vim" = "nvim";
    "ls" = "eza --icons -l -T -L=1";
    "cat" = "bat --style=plain";
    "grep" = "rg";
    "rm" = "rm -v";
    "mv" = "mv -iv";
    "cp" = "cp -riv";
    "mkdir" = "mkdir -vp";
    "homeswitch" = "home-manager switch --flake .";
    "n" = "nvim";
  };
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
