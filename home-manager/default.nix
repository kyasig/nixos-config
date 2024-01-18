{ config, pkgs,... }:
{
  imports = [
    ./wms
    ./shell
    ./programs
  ];
  home = {
    username = "ky";
    homeDirectory = "/home/ky";
    stateVersion = "23.11"; #dont change xd
    packages = with pkgs; [
      bitwarden
      dmenu
      mpv
      obs-studio
      pulsemixer
      thunderbird
      vesktop
      vlc
      vscodium
      ghc
      nuclear
      qbittorrent
      kitty
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1"; 
    };
  };
  programs.home-manager.enable = true;
}
