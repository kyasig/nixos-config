{config,pkgs, ...}:
{
  imports = [
    ./kitty.nix
    ./firefox.nix
    ./rofi.nix
    ./zathura.nix
    ./neovim.nix
    ./qutebrowser.nix
    ./gtk.nix
  ];
}
