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
      "nf" = "fd -H -tf | fzf --border=rounded --preview 'bat --style=numbers --color=always {}' | xargs -r $EDITOR";
      "cf" = "cd $(fd -t d | fzf --border=rounded --preview 'bat --style=numbers --color=always {}')";
      "fpdf" = "fd -tf --glob '*.pdf' | fzf --border=rounded | xargs  -r zathura";
      "fy" = "yazi $(fd -t d | fzf)";
      "ac" = "ani-cli";
      "setwal" = "feh --bg-fil";
      "z" = "zathura";
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
}

