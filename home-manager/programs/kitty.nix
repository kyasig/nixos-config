{ config, lib, ... }:
{
  programs.kitty = {
    enable = true;
    settings = {
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
      name = lib.mkForce "mononoki";
      size = lib.mkForce 16;
    };
    shellIntegration = {
      enableZshIntegration = true;
    };
    extraConfig = ''
      window_padding_width 10
      background_opacity 0.85
      confirm_os_window_close 0
      enable_audio_bell no
    '';
  };
}
