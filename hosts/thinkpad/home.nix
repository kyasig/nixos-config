{ pkgs, ... }:
{
  imports = [
    ../../home-manager/default.nix
  ];

  home.packages = with pkgs; [
    vesktop
    thunderbird
  ];
}
