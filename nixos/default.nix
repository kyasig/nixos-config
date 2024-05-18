{config, lib, pkgs, user,...}:
{
  imports = [
    ./configuration.nix
    ./hardware-configuration.nix
    ./auth.nix
    ./audio.nix
    ./fonts.nix
    ./nix.nix
    ./nvidia.nix
    ./virtualization.nix
    ./xorg.nix
  ];

  programs.zsh.enable = true;
  environment = {
    shells = [pkgs.zsh];
    variables = {
      EDITOR = "nvim";
      VISUAL = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
      FLAKE = "/home/${user}/nixos-config";
    };
    systemPackages = with pkgs;[
      firefox
      dmenu
      cups-toshiba-estudio
      cups-filters
      git
      neovim
      wget
      unzip
      vim
      killall
      ripgrep
      usbutils
      ntfs3g
      nh
    ];
  };
  programs.nano.enable = false;
}
