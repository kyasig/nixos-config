{ lib, ... }:
{
  programs.kitty = {
    enable = true;
    settings = {
      window_padding_width = 10;
      confirm_os_window_close = 0;
      disable_ligatures = "never";
      tab_bar_edge = "bottom";
      copy_on_select = "clipboard";
      enable_audio_bell = false;
    };
    font = {
      name = lib.mkForce "JetBrainsMono Nerd Font Mono";
    };
    shellIntegration = {
      enableZshIntegration = true;
    };
  };
}
