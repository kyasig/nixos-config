{ config, ... }:

let
  myAliases = {
    "c" = "clear";
    "listgens" = "sudo nix-env -p /nix/var/nix/profiles/system --list-generations";
    "deletegens" = "sudo nix-env -p /nix/var/nix/profiles/system --delete-generations";
    "vim" = "nvim";
    "ls" = "eza -lho --group-directories-first --no-time --icons";
    "cat" = "bat --style=plain";
    "grep" = "rg";
    "rm" = "rm -v";
    "mv" = "mv -iv";
    "cp" = "cp -riv";
    "mkdir" = "mkdir -vp";
    "n" = "nvim";
    "y" = "yazi";
    "nf" =
      "fd -H -tf | fzf  --prompt='edit file: ' --preview 'bat --style=numbers --color=always {}' --border-label='╢Edit File╟'| xargs -r $EDITOR";
    "fpdf" = "fd -tf --glob '*.pdf' | fzf --border=double --prompt='Open PDF: ' | xargs  -r zathura";
    "wall" =
      "fd -tf --full-path /home/ky/Pictures/Wallpapers | fzf --preview 'feh --bg-scale {}' --border-label='╢Change Wallpaper╟' --prompt='select wallpaper: '";
    "fy" = "yazi $(fd -t d | fzf)";
    "ac" = "ani-cli";
    "nb" = "newsboat";
    "setwal" = "feh --bg-fil";
    "z" = "zathura";
  };
in
{
  programs.zsh = {
    enable = true;
    enableCompletion = true;
    syntaxHighlighting.enable = true;
    autosuggestion.enable = true;
    shellAliases = myAliases;
    history = {
      size = 10000;
      path = "${config.xdg.dataHome}/zsh/history";
    };
    initContent = ''
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
