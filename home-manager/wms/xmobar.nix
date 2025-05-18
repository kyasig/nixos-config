{ config, ... }:
{
  programs.nixmobar =
    let
      bg = "${config.lib.stylix.colors.withHashtag.base00}";
      fg = "${config.lib.stylix.colors.withHashtag.base05}";
      color1 = "${config.lib.stylix.colors.withHashtag.base01}";
      color2 = "${config.lib.stylix.colors.withHashtag.base02}";
      color3 = "${config.lib.stylix.colors.withHashtag.base03}";
      color4 = "${config.lib.stylix.colors.withHashtag.base04}";
      color6 = "${config.lib.stylix.colors.withHashtag.base06}";
      color7 = "${config.lib.stylix.colors.withHashtag.base07}";
      color8 = "${config.lib.stylix.colors.withHashtag.base08}";
      color9 = "${config.lib.stylix.colors.withHashtag.base09}";
      colorA = "${config.lib.stylix.colors.withHashtag.base0A}";
      colorB = "${config.lib.stylix.colors.withHashtag.base0B}";
      colorC = "${config.lib.stylix.colors.withHashtag.base0C}";
      colorD = "${config.lib.stylix.colors.withHashtag.base0D}";
      colorE = "${config.lib.stylix.colors.withHashtag.base0E}";
      colorF = "${config.lib.stylix.colors.withHashtag.base0F}";
    in
    {
      enable = true;
      font = "JetBrains Mono Nerd Font 10.8";
      bgColor = bg;
      fgColor = fg;
      position = "TopSize L 100 27";
      allDesktops = true;
      #persistent = true;
      #sepChar = "%";
      alignSep = "}{";
      alpha = 255;
      template = "  %UnsafeXMonadLog% }{<fc=${color9}> </fc>%memory% <fc=${colorA}> </fc>%cpu% <fc=${colorB}> </fc>%uptime% <fc=${colorC}> </fc>%disku% <fc=${color8}> </fc>%default:Master% <fc=${colorD}> </fc>%battery% <fc=${colorE}> </fc>%date% ";
      commands = # haskell
        ''
            Run Cpu ["-t", "<total>%"] 10
          , Run Memory ["-t","<used>m used"] 10
          , Run Date "%b %d (%a) %r" "date" 10
          , Run BatteryP ["ACAD", "BAT0", "hidpp_battery_0"] ["-t", "<left>%"] 3
          , Run Uptime ["-t","<days>d <hours>h <minutes>m"] 10
          , Run DiskU [("/","<free> free")] [] 3000
          , Run Volume "default" "Master" ["-t", "<volume>%<status>",
                                          "--",
                                          "-O", "",
                                          "-o", "[Muted]",
                                          "-c", "${colorA}"
                                          ] 10
          , Run UnsafeXMonadLog
        '';
    };
}
