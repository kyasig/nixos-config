{
  config,
  pkgs,
  lib,
  ...
}:
{
  programs.rofi = {
    enable = true;
    #font = "Jetbrains Mono Nerd Font Mono";
    extraConfig = {
      modi = "drun";
      display-drun = "Spawn";
      matching = "fuzzy";
    };
    location = "center";
    plugins = with pkgs; [
      rofi-power-menu
    ];
    theme =
      let
        inherit (config.lib.formats.rasi) mkLiteral;
      in
      {
        "*" = {
          # Theme settings
          #highlight = "bold italic";
          scrollbar = false;

          background-color = lib.mkDefault(mkLiteral "#${config.lib.stylix.colors.base00}");
          background2 = lib.mkDefault ( mkLiteral "#${config.lib.stylix.colors.base01}");
          foreground-color = lib.mkDefault (mkLiteral "#${config.lib.stylix.colors.base06}");
          highlight = lib.mkDefault (mkLiteral "#${config.lib.stylix.colors.base0E}");
        };
        "window" = {
          #background-color = mkLiteral "@background-color";
          border = 2;
          padding = 2;
          border-color = mkLiteral "@highlight";
        };
        #"mainbox" = {
        #  border = 0;
        #  padding = 0;
        #};

        "message" = {
          #border = mkLiteral "2px 0 0";
          #border-color = mkLiteral "@background-color";
          #padding = mkLiteral "1px";
        };

        "textbox" = {
          #highlight = mkLiteral "@background-color";
          #text-color = mkLiteral "@foreground-color";
        };

        "listview" = {
          #border = mkLiteral "2px solid 0 0";
          #padding = mkLiteral "2px 0 0";
          ##border-color = mkLiteral "@background2";
          #pacing = mkLiteral "2px";
          #scrollbar = mkLiteral "@scrollbar";
        };

        "element" = {
          border = mkLiteral "0";
          padding = mkLiteral "2px";
          orientation = mkLiteral "horizontal";
          spacing = mkLiteral "5px";
          children = mkLiteral "[element-text ]";
          #text-color = mkLiteral "@foreground-color";
        };

        "element.normal.normal" = {
          background-color = mkLiteral "@background-color";
          text-color = mkLiteral "@foreground-color";
        };

        "element.normal.urgent" = {
          background-color = mkLiteral "@urgent-background";
          text-color = mkLiteral "@urgent-foreground";
        };

        "element.normal.active" = {
          background-color = mkLiteral "@background-color";
          text-color = mkLiteral "@foreground-color";
        };

        "element.selected.normal" = {
          background-color = mkLiteral "@highlight";
          text-color = mkLiteral "@foreground-color";
        };

        "element.selected.active" = {
          background-color = mkLiteral "@background-color";
          #text-color = mkLiteral "@foreground-color";
        };

        "element.alternate.normal" = {
          background-color = mkLiteral "@background-color";
          text-color = mkLiteral "@foreground-color";
        };

        "element.alternate.active" = {
          background-color = mkLiteral "@background-color";
          text-color = mkLiteral "@foreground-color";
        };

        "mode-switcher" = {
          border = mkLiteral "2px 0 0";
          border-color = mkLiteral "@separatorcolor";
        };

        "inputbar" = {
          #spacing = mkLiteral "0";
          # text-color = mkLiteral "@foreground-color";
          padding = mkLiteral "2px";
          children = mkLiteral "[ prompt, textbox-prompt-sep, entry, case-indicator ]";
        };

        "case-indicator,\nentry,\nprompt,\nbutton" = {
          spacing = mkLiteral "0";
          text-color = mkLiteral "@foreground-color";
        };

        "textbox-prompt-sep" = {
          expand = false;
          str = mkLiteral ''":"'';
          text-color = mkLiteral "@foreground-color";
          margin = mkLiteral "0 0.3em 0 0";
        };
        "element-text" = {
          kackground-color = mkLiteral "inherit";
          text-color = mkLiteral "inherit";
        };
      };
    terminal = "${pkgs.kitty}";
  };
  home.packages = with pkgs; [
    rofi-power-menu
    papirus-icon-theme
  ];
}
