{config,lib, inputs, nix-colors, scheme,...}:
let 
  colorScheme = inputs.nix-colors.colorSchemes.${scheme};
in{
  programs.xmobar = {
    enable = true;
    extraConfig = ''
    Config
    {
      font = "Mononoki 12"
    , additionalFonts = ["xft:Inconsolata", "xft:FontAwesome"]
    , position = TopSize L 100 27
    -- , position = TopHM 27 4 6 6 0 
    , bgColor = "#${colorScheme.palette.base00}"
    , fgColor = "#${colorScheme.palette.base05}" 
    , persistent = True
    , commands = [
          Run Cpu ["-t", " <total>%"] 10
        , Run Memory ["-t","<used>m used"] 10
        , Run Date "%a %b %d [%r]" "date" 10
        , Run BatteryP ["ACAD", "BAT0", "hidpp_battery_0"] ["-t", "<left>%"] 3
        , Run Uptime ["-t","<hours>h <minutes>m"] 10
        , Run DiskU [("/","<free> free")] [] 3000
        , Run UnsafeXMonadLog
      ]
    , sepChar = "%"
    , alignSep = "}{"
    , template = "  %UnsafeXMonadLog% }{ <fc=#${colorScheme.palette.base0B}></fc> %memory% <fc=#${colorScheme.palette.base0D}> </fc> %cpu% <fc=#${colorScheme.palette.base08}> </fc> %uptime% <fc=#${colorScheme.palette.base0C}> </fc> %disku% <fc=#${colorScheme.palette.base0A}> </fc>  %battery% <fc=#${colorScheme.palette.base0E}> </fc> %date% "
    }
    '';
  };
}