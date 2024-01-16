{ config, lib,  pkgs, ...}:

let 
  myAliases = {
      "c" = "clear";
      "listgens" = "sudo nix-env -p /nix/var/nix/profiles/system --list-generations";
      "deletegens" = "sudo nix-env -p /nix/var/nix/profiles/system --delete-generations";
      "vim" = "nvim";
      "ls" = "eza --icons -l -T -L=1";
      "cat" = "bat --style=plain";
      "grep" = "rg";
      "rm" = "rm -v";
      "mv" = "mv -iv";
      "cp" = "cp -riv";
      "mkdir" = "mkdir -vp";
      "n" = "nvim";
      "y" = "yazi";
      "nf" = "nvim $(fzf)";
      "pks" = "firefox https://search.nixos.org/packages";
  };
in 
{

 imports = [./starship.nix];

 programs.zsh = {
    enable = true;
    enableAutosuggestions = true;
    enableCompletion = true;
    syntaxHighlighting.enable= true;
    shellAliases = myAliases;
    initExtra = ''
    set -o vi
    zstyle ':completion:*' matcher-list 'm:{a-z}={A-Za-z}'
    '';
  };
 programs.bash = {
    enable = false;
    enableCompletion = true;
    shellAliases = myAliases;
    bashrcExtra = ''
      set -o vi
      PS1='[\u@\h:\w]\n⤷ '
    '';
  };
  home.packages = with pkgs;[
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
  ];
}

