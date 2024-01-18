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
    };
    systemPackages = with pkgs;[
      dmenu
      git
      neovim
      unzip
      vim
      killall
      ripgrep
      usbutils
    ];
  };
  programs.nano.enable = false;
}
