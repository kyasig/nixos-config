{ pkgs, ... }:
let
  dmenu = pkgs.dmenu.override {
    patches = [ ./center.diff ];
  };
in
{
  home.packages = [ dmenu ];
}
