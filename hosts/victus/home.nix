{inputs,pkgs, ...}:
{
  imports = [
    ../../home-manager/default.nix
  ];

  colorScheme = inputs.nix-colors.colorSchemes.kanagawa;

  home.packages = with pkgs; [
    obs-studio
    vesktop
    telegram-desktop
    freetube
    gimp
    mousam
    vlc
    thunderbird
    chromium
  ];
}
