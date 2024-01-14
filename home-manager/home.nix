{ config, pkgs,  ... }:

{
  home.username = "ky";
  home.homeDirectory = "/home/ky";

  nixpkgs = {
    config = {
      allowUnfree = true;
      allowUnfreePredicate = (_: true);
    };
  };
  imports = [
    ./wms/xmonad/xmonad.nix
    ./shell/sh.nix
    ./programs/firefox.nix
    ./programs/stylix.nix
  ];
  home.stateVersion = "23.11"; # dont change lol

  home.packages = with pkgs; [
    bitwarden
    dmenu
    mpv
    obs-studio
    pulsemixer
    thunderbird
    steam # fuck you loading
    vesktop
    vlc
    vscodium
    ghc
    nuclear
    qbittorrent
    kitty
  ];
  home.sessionVariables = {
     EDITOR = "nvim";
  };

  programs.home-manager.enable = true;
}
