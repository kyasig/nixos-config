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
      protonmail-bridge
      pass
      thunderbird
      vesktop
      vlc
      vscodium-fhs
      ghc
      nuclear
      qbittorrent
      kitty
      pinta #nah i'd paint
      xclip
      #yazi
      ranger
      platformio
      lxappearance
      zathura
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1"; 
    };
  };
  programs.home-manager.enable = true;
}
