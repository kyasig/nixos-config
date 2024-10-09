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
      dmenu
      mpv
      pulsemixer
      ghc
      qbittorrent
      xclip
      zathura
      exif
      exiftool
      pandoc
      texliveSmall
      texlivePackages.latexmk
      latexrun
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
    };
  };

  programs.home-manager.enable = true;
}
