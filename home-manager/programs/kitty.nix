{config, lib, pkgs, inputs, nix-colors, scheme,...}:
let 
   colorScheme = inputs.nix-colors.colorSchemes.${scheme};
in{
  programs.kitty = {
    enable = true;
    settings = {
      foreground = "#${colorScheme.palette.base05}";
      background = "#${colorScheme.palette.base00}";
      color0 = "#${colorScheme.palette.base00}";
      color1 = "#${colorScheme.palette.base08}";
      color2 = "#${colorScheme.palette.base0B}";
      color3 = "#${colorScheme.palette.base0A}";
      color4 = "#${colorScheme.palette.base0D}";
      color5 = "#${colorScheme.palette.base0E}";
      color6 = "#${colorScheme.palette.base0C}";
      color7 = "#${colorScheme.palette.base05}";
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
