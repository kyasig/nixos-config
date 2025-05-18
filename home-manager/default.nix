{ pkgs, user, inputs,... }:
{
  imports = [
    ./wms
    ./shell
    ./programs
  ];

  home = {
    username = user;
    homeDirectory = "/home/${user}";
    stateVersion = "23.11"; # dont change xd
    packages = with pkgs; [
      texliveSmall
      fwupd
      dmenu
      mpv
      pulsemixer
      alsa-utils
      xclip
      zathura
      exif
      exiftool
      pandoc
    ];
    sessionVariables = {
      EDITOR = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
    };
  };

  xdg = {
    enable = true;
    userDirs = {
      enable = true;
      createDirectories = true;
    };
  };
  stylix = {
    targets = {
      neovim.enable = false;
    };
  };

  systemd.user.startServices = "sd-switch";

  programs.home-manager.enable = true;
}
