{ pkgs, lib, config,inputs, nix-colors, ... }:
{
  programs.zathura = {
    enable = true;
    colors = {
      webpage.preferrred_color_scheme = "${config.colorScheme.palette.base00}"
      tabs.bar.bg = "${config.colorScheme.palette.base00}"
    }
  };
}
