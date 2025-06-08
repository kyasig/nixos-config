{pkgs,...}:
{
  home.packages = with pkgs;[
    libnotify
  ];
  dunst.enable = true;
}
