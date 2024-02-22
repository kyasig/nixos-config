{config, lib, pkgs, ...}:
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
    };
    systemPackages = with pkgs;[
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
    ];
  };
  programs.nano.enable = false;
}
