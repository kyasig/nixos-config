{ pkgs, ... }:
let
  screenshot = pkgs.writeShellApplication {
    name = "scrnsht";
    text = ''
      name='%Y-%m-%d-%T-screenshot.png'
      case "$1" in
        "copy") scrot -s --line mode=edge -o /dev/stdout | xclip -selection clipboard -t image/png -i; notify-send "screenshot taken" "copied to clipboard" || exit ;;
        "save") scrot ./"$name" -s --line mode=edge; notify-send "screenshot taken" "saved to $PWD"
      esac
    '';
  };
in
{
  home.packages = [
    pkgs.scrot
    screenshot
  ];
}
