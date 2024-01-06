#IT'S GAMING TIME RAAAHHHHH
{ config, lib, pkgs, ...}:
{
  programs.steam = {
    enable = true;
    remotePlay.openFirewall = true; 
    dedicatedServer.openFirewall = true; 
  };
  home.packages = with pkgs;[
    steam-original
    steam-run
    steamcmd
    steam-tui
  ];
}
