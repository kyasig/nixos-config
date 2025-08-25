{ pkgs, ... }:
{
  imports = [
    ../../home-manager/default.nix
  ];


  stylix = {
    base16Scheme = "${pkgs.base16-schemes}/share/themes/oxocarbon-dark.yaml";
  };

  home.packages = with pkgs; [
    obs-studio
    v4l-utils
    #vesktop
    discord
    telegram-desktop
    freetube
    vlc
    thunderbird
    #texliveSmall
    #texlivePackages.latexmk
    #latexrun
    qbittorrent
  ];
}
