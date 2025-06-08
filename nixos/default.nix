{
  inputs,
  pkgs,
  user,
  lib,
  ...
}:
{
  imports = [
    ./configuration.nix
    ./auth.nix
    ./audio.nix
    ./fonts.nix
    ./nix.nix
    ./nvidia.nix
    ./virtualization.nix
    ./xorg.nix
  ];

  nvidia.enable = lib.mkDefault false;
  programs.zsh.enable = true;
  environment = {
    shells = [ pkgs.zsh ];
    variables = {
      EDITOR = "nvim";
      VISUAL = "nvim";
      NIXPKGS_ALLOW_UNFREE = "1";
      NH_FLAKE = "/home/${user}/nixos-config";
    };
    systemPackages = with pkgs; [
      firefox
      fastfetch
      dmenu
      git
      neovim
      wget
      unzip
      killall
      ripgrep
      usbutils
      ntfs3g
      nh
      nixfmt-rfc-style
      #inputs.wfetch.packages.${pkgs.system}.default
    ];
  };
  programs.nano.enable = false;
}
