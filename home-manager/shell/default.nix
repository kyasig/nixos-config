{config, pkgs, ...}:
{
  imports = [
    ./zsh.nix
    ./starship.nix
    ./yazi.nix
    ./fzf.nix
  ];
  home.packages = with pkgs;[
    ani-cli
    atool
    cowsay
    bottom
    btop
    htop
    ripgrep
    killall
    tldr
    bat
    eza
    pfetch-rs #nah i'd fetch
    neofetch
    cmatrix
    asciiquarium
    yazi
    cbonsai
    fzf
    fd
    platformio
  ];
}
