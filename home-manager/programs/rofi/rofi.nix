{ config, lib, pkgs, ...}:
let 
  # shamelessly totally stolen from eric murphey xd
  myRofiTheme = {
    "*" = {
      background-color = mkLiteral "#1e1e2e";
      foreground-color = mkLiteral "#cdd6f4";
      text-color = mkLiteral "#f5c2e7";
      border-color = mkLiteral "#f5c2e7";

      border = 0;
      margin = 0;
      padding = 0;
      spacing = 0;
    };
    "#window" = {
      width = mkLiteral "30%";
      background-color = mkLiteral "#1e1e2e";
      border = 4;
      border-color = mkLiteral "#f5c2e7";
    };
    "#element" = {
      padding = mkLiteral "8 12";
      background-color = mkLiteral "transparent";
      text-color = "#7f849c";
    };
    "#element.selected" = {
      text-color = mkLiteral "#cdd6f4";
      background-color = mkLiteral "#313244";
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
      background-color = mkLiteral "#585b70";
      text-color = mkLiteral "#cdd6f4";
    };
    "#inputbar" = {
      children = map mkLiteral [ "prompt" "entry" ];
      background-color = mkLiteral "#1e1e2e";
    };
    "#listview" = {
      background-color = "#585b70";
      columns = 1;
      lines = 10;
    };
    "#mainbox" = {
      children = map mkLiteral ["inputbar" "listview"];
      background-color = "#1e1e2e";
    };
    "#prompt" = {
      enabled = true;
      padding = mkLiteral "12 0 0 12";
      background-color = mkLiteral "#585b70";
      text-color = mkLiteral "#cdd6f4";
    };
  };
  inherit(config.lib.formats.rasi) mkLiteral;
in{
   programs.rofi = {
     enable = true;
     font = "Mononoki";
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

