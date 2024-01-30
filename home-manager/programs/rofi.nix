{ config, lib, inputs, pkgs, nix-colors,scheme, ...}:
let 
  # shamelessly totally stolen from eric murphey xd
  colorScheme = inputs.nix-colors.colorSchemes.${scheme}; 
  myRofiTheme = lib.mkForce {
    "*" =  {
      background-color = mkLiteral "#${colorScheme.colors.base00}";
      foreground-color = mkLiteral "#${colorScheme.colors.base05}";
      text-color = mkLiteral "#${colorScheme.colors.base05}";
      border-color = mkLiteral "#${colorScheme.colors.base0E}";
      border =  0;
      margin =  0;
      padding = 0;
      spacing = 0;
    };
    "#window" = {
      width = mkLiteral "30%";
      background-color = mkLiteral "#${colorScheme.colors.base00}";
      border = 4;
      border-color = mkLiteral "#${colorScheme.colors.base0E}";
    };
    "#element" = {
      padding = mkLiteral "8 12";
      background-color = mkLiteral "transparent";
      text-color = "#${colorScheme.colors.base04}";
    };
    "#element.selected" = {
      text-color = mkLiteral "#${colorScheme.colors.base05}";
      background-color = mkLiteral "#${colorScheme.colors.base02}";
    };
    "#element-text" = {
      background-color = mkLiteral "transparent";
      text-color = mkLiteral "inherit";
      vertical-align = mkLiteral "0.5";
     };
    "#element-icon" = {
      size = mkLiteral "14px";
      padding = mkLiteral "0 10 0 0";
      background-color = mkLiteral "transparent";
    };
    "#entry" = {
      padding = 12;
      background-color = mkLiteral "#${colorScheme.colors.base04}";
      text-color = mkLiteral "#${colorScheme.colors.base05}";
    };
    "#inputbar" = {
      children = map mkLiteral [ "prompt" "entry" ];
      background-color = mkLiteral "#${colorScheme.colors.base00}";
    };
    "#listview" = {
      background-color = mkLiteral "#${colorScheme.colors.base04}";
      columns = 1;
      lines = 10;
    };
    "#mainbox" = {
      children = map mkLiteral ["inputbar" "listview"];
      background-color = mkLiteral"#${colorScheme.colors.base00}";
    };
    "#prompt" = {
      enabled = true;
      padding = mkLiteral "12 0 0 12";
      background-color = mkLiteral "#${colorScheme.colors.base04}";
      text-color = mkLiteral "#${colorScheme.colors.base05}";
    };
  };
  inherit(config.lib.formats.rasi) mkLiteral;
in{
   programs.rofi = {
     enable = true;
     font = lib.mkDefault "Mononoki";
     extraConfig = {
       display-drun = "Spawn:";
       display-window = "Windows:";
       drun-display-format = "{name}";
       show-icons = true;
       icon-theme = "Papirus";
     };
     theme = myRofiTheme;
   };
   home.packages = with pkgs;[
    inconsolata-nerdfont #for the icons xd
    papirus-icon-theme
    rofi-power-menu
    rofi-emoji
   ];
}

