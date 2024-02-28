{config, pkgs, inputs, lib, scheme,font,...}:
let 
  colorScheme = inputs.nix-colors.colorSchemes.${scheme};
in{
  programs.xmobar = {
    extraConfig = ''
    Config
    {
      font = "${font} 12"
    , additionalFonts = ["xft:Inconsolata", "xft:FontAwesome"]
    , position = TopSize L 100 27
    , bgColor = "#${colorScheme.palette.base00}"
    , fgColor = "#${colorScheme.palette.base05}"
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
    , template = "  %UnsafeXMonadLog% }{ <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base0D}><fc=#${colorScheme.palette.base0D}>%memory%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base0B}><fc=#${colorScheme.palette.base0B}>%cpu%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base08}><fc=#${colorScheme.palette.base08}>%uptime%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base0A}><fc=#${colorScheme.palette.base0A}>%disku%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base0C}><fc=#${colorScheme.palette.base0C}>%battery%</fc></box> <box type=Bottom width=2 mb=2 color=#${colorScheme.palette.base0E}><fc=#${colorScheme.palette.base0E}>%date%</fc></box> "
}
    '';
  };
}
