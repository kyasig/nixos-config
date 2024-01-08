{config, pkgs, inputs, lib, ...}:
let 
  #colorScheme = inputs.nix-colors.colorSchemes.solarized-dark;
  colorScheme = inputs.nix-colors.colorSchemes.catppuccin-mocha;
in{
  programs.xmobar = {
    extraConfig = ''
    Config
    {
      font = "Mononoki 12"
    , additionalFonts = ["xft:Inconsolata", "xft:FontAwesome"]
    , position = Static {xpos = 0, ypos = 0, width = 1920, height = 27}
    , bgColor = "#${colorScheme.colors.base00}"
    , fgColor = "#${colorScheme.colors.base05}"
    , allDesktops = True
    , persistent = True
    , commands = [
          Run Cpu ["-t", " <total>%"] 10
        , Run Memory ["-t"," <used>m used"] 10
        , Run Date " %a %b %d [%r]" "date" 10
        , Run BatteryP ["ACAD", "BAT0", "hidpp_battery_0"] ["-t", " <left>%"] 3
        , Run Uptime ["-t"," <hours>h <minutes>m"] 10
        , Run DiskU [("/"," <free> free")] [] 3000
        , Run UnsafeXMonadLog
      ]
    , sepChar = "%"
    , alignSep = "}{"
    , template = "  %UnsafeXMonadLog% }{ <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base0D}><fc=#${colorScheme.colors.base0D}>%memory%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base0B}><fc=#${colorScheme.colors.base0B}>%cpu%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base08}><fc=#${colorScheme.colors.base08}>%uptime%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base0A}><fc=#${colorScheme.colors.base0A}>%disku%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base0C}><fc=#${colorScheme.colors.base0C}>%battery%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.colors.base0E}><fc=#${colorScheme.colors.base0E}>%date%</fc></box> "
    }
    '';
  };
}
