{ config, ... }:
{
  programs.xmobar = {
    enable = true;
    extraConfig = ''
          Config
          {
            font = "JetBrains Mono Nerd Font 10.8"
          , additionalFonts = ["xft:Inconsolata", "xft:FontAwesome"]
          , position = TopSize L 100 27
          , bgColor = "#${config.lib.stylix.colors.base00}"
          --config.lib.stylix.colors
          , fgColor = "#${config.lib.stylix.colors.base05}"
          , allDesktops = True
          , persistent = True
          , commands = [
                Run Cpu ["-t", " <total>%"] 10
              , Run Memory ["-t"," <used>m used"] 10
              , Run Date " %a %b %d - %r" "date" 10
              , Run BatteryP ["ACAD", "BAT0", "hidpp_battery_0"] ["-t", " <left>%"] 3
              , Run Uptime ["-t"," <days>d <hours>h <minutes>m"] 10
              , Run DiskU [("/"," <free> free")] [] 3000
              , Run UnsafeXMonadLog
              ]
          , sepChar = "%"
          , alignSep = "}{"
          --, template = "  %UnsafeXMonadLog% }{ <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0D}><fc=#${config.lib.stylix.colors.base0D}>%memory%</fc></box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0B}><fc=#${config.lib.stylix.colors.base0B}>%cpu%</fc></box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base08}><fc=#${config.lib.stylix.colors.base08}>%uptime%</fc></box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0A}><fc=#${config.lib.stylix.colors.base0A}>%disku%</fc></box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0C}><fc=#${config.lib.stylix.colors.base0C}>%battery%</fc></box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0E}><fc=#${config.lib.stylix.colors.base0E}>%date%</fc></box> "
          , template = "  %UnsafeXMonadLog% }{ <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0D}>%memory%</box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0B}>%cpu%</box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base08}>%uptime%</box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0A}>%disku%</box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0C}>%battery%</box> <box type=Bottom width=2 mb=1 color=#${config.lib.stylix.colors.base0E}>%date%</box> "
      }
    '';
  };
}
