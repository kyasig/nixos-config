{ pkgs, lib, config,inputs, nix-colors, ... }:
{
  programs.gtk = {
    enable = true;
    gtk3.extraconfig = {
      gtk-application-prefer-dark-theme = 1;
      gtk-error-bell = 0;
    };
    gtk4.extraconfig = {
      gtk-application-prefer-dark-theme = 1;
      gtk-error-bell = 0;
    };
  };
}
