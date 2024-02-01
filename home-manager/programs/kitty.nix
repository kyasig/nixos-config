{config, lib, pkgs, inputs, nix-colors, scheme,...}:
let 
   colorScheme = inputs.nix-colors.colorSchemes.${scheme};
in{
  programs.kitty = {
    enable = true;
    settings = {
      foreground = "#${colorScheme.colors.base05}";
      background = "#${colorScheme.colors.base00}";
      color0 = "#${colorScheme.colors.base00}";
      color1 = "#${colorScheme.colors.base08}";
      color2 = "#${colorScheme.colors.base0B}";
      color3 = "#${colorScheme.colors.base0A}";
      color4 = "#${colorScheme.colors.base0D}";
      color5 = "#${colorScheme.colors.base0E}";
      color6 = "#${colorScheme.colors.base0C}";
      color7 = "#${colorScheme.colors.base05}";
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
