{ config, lib, ... }:
{
  programs.kitty = {
    enable = true;
    settings = {
      window_padding_width = 10;
      confirm_os_window_close = 0;
      disable_ligatures = "never";
      tab_bar_edge = "bottom";

      foreground = "#${config.colorScheme.palette.base05}";
      background = "#${config.colorScheme.palette.base00}";
      color0 = "#${config.colorScheme.palette.base00}";
      color1 = "#${config.colorScheme.palette.base08}";
      color2 = "#${config.colorScheme.palette.base0B}";
      color3 = "#${config.colorScheme.palette.base0A}";
      color4 = "#${config.colorScheme.palette.base0D}";
      color5 = "#${config.colorScheme.palette.base0E}";
      color6 = "#${config.colorScheme.palette.base0C}";
      color7 = "#${config.colorScheme.palette.base05}";
    };
    font = {
      name = lib.mkForce "JetBrainsMono Nerd Font Mono";
      size = lib.mkForce 14;
    };
    shellIntegration = {
      enableZshIntegration = true;
    };
    extraConfig = ''
      background_opacity 0.85
      enable_audio_bell no
      allow_remote_control yes
    '';
  };
}
