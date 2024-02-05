{ config, lib,  pkgs, ...}:
{
 programs.yazi = {
   enable = true;
 };
 home.file.".config/yazi/yazi.toml".source = ./yazi.toml;
}

