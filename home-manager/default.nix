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
      qtspim
      clang
      dmenu
      mpv
      obs-studio
      pulsemixer
      protonmail-bridge
      pass
      thunderbird
      vesktop
      vlc
      ghc
      nuclear
      qbittorrent
      kitty
      kile
      inkscape
      xclip
      ytfzf
      ranger
      platformio
      lxappearance
      zathura
      exif
      exiftool
      cmake
      pandoc
      texliveSmall
      vscodium
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1"; 
    };
  };
  programs.home-manager.enable = true;
}
