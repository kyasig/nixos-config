{ pkgs,  inputs,... }:
{
  imports = [
    ./wms
    ./shell
    ./programs
		inputs.nix-colors.homeManagerModules.default
  ];

	colorScheme = inputs.nix-colors.colorSchemes.gruvbox-dark-hard;

  nixpkgs.config.allowUnfree = true;
  home = {
    username = "ky";
    homeDirectory = "/home/ky";
    stateVersion = "23.11"; #dont change xd
    packages = with pkgs; [
      fwupd
      neomutt
      dmenu
      mpv
      obs-studio
      pulsemixer
      thunderbird
      discord
      vlc
      ghc
      qbittorrent
      kitty
      xclip
      ranger
      zathura
			telegram-desktop
      exif
      exiftool
      cmake
      pandoc
      texliveSmall
			vesktop
      freetube
      texliveSmall
      texlivePackages.latexmk
      latexrun
      gimp
      mousam
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
    };
  };

  programs.home-manager.enable = true;
}
