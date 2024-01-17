{pkgs,...}:
{
  fonts = {
    enableGhostscriptFonts = true;
    packages = with pkgs; [
      noto-fonts
      noto-fonts-extra
	    noto-fonts-cjk-sans
	    noto-fonts-cjk-serif
      inconsolata
      font-awesome
	    mononoki
    ];
  };
}
