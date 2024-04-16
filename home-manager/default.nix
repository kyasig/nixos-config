{ config, pkgs, nix-colors, inputs,... }:
{
  imports = [
    ./wms
    ./shell
    ./programs
		nix-colors.homeManagerModules.default
  ];

	colorScheme = nix-colors.colorSchemes.dracula;

  nixpkgs.config.allowUnfree = true;
  home = {
    username = "ky";
    homeDirectory = "/home/ky";
    stateVersion = "23.11"; #dont change xd
    packages = with pkgs; [
      bitwarden
			neomutt
      dmenu
      mpv
      obs-studio
      pulsemixer
      pass
      thunderbird
      discord
      vlc
      ghc
      qbittorrent
      kitty
      xclip
      ytfzf
      ranger
      platformio
      lxappearance
      zathura
			telegram-desktop
      exif
      exiftool
      cmake
      pandoc
      texliveSmall
      vscodium
			vesktop
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
    };
  };

  programs.home-manager.enable = true;
}
