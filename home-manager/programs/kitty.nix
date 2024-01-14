{config, lib, pkgs, ...}:
{
  programs.kitty = {
    enable = true;
    font = {
      name = lib.mkForce "mononoki";
      size = lib.mkForce 16;
    };
    shellIntegration = {
      enableZshIntegration = true;
    };
    extraConfig = ''
      window_padding_width 10
      background_opacity 0.77
      confirm_os_window_close 0
    '';
  };
}
