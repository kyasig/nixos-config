{config,pkgs, ...}:
{
  imports = [
    ./kitty.nix
    ./firefox.nix
    ./rofi.nix
    ./stylix.nix
  ];
}