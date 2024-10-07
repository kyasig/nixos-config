{pkgs, ...}:{
  programs.scrot.enable = true;
  screenshot = pkgs.writeShellApplication{
    name = "scrnsht";
    text = ''
      name = '%Y-%m-%d-%T-screenshot.png'
      case "$1" in
        "copy") scrot -sf --line mode=edge -e 'xclip -selection clipboard -t image/png -i $f' || exit ;;
        "save") scrot ./"$name" -sf --line mode=edge
      esac
    '';
  };
}
