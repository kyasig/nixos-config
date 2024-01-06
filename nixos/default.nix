{ pkgs, config, lib, ...}:
{
  imports = [./configuration.nix];
  environment.systemPackages = with pkgs; [
    git
    neovim
    polkit_gnome
    unzip
    vim
    wget
  ];
}
