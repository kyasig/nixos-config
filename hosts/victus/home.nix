{ inputs, pkgs, ... }:
{
  imports = [
    ../../home-manager/default.nix
  ];

  colorScheme = inputs.nix-colors.colorSchemes.gruvbox-dark-hard;

  home.packages = with pkgs; [
    obs-studio
    vesktop
    telegram-desktop
    freetube
    gimp
    mousam
    vlc
    thunderbird
    texliveSmall
    texlivePackages.latexmk
    latexrun
    qbittorrent
  ];
}
