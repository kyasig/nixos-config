{ pkgs, ... }:
{
  fonts = {
    enableGhostscriptFonts = true;
    fontDir.enable = true;
    enableDefaultPackages = true;
    packages = with pkgs; [
      noto-fonts-cjk-sans
      noto-fonts-cjk-serif
      inconsolata
      font-awesome
      mononoki
      #nerd-fonts.jetbrains-mono
      # (nerdfonts.override{
      #   fonts = [
      #    "JetBrainsMono"
      #   ];
      # })
    ];
  };
}
