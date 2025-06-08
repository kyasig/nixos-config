{ pkgs, ... }:
{
  home.packages = with pkgs; [
    libnotify
  ];
  services.dunst = {
    enable = true;
    settings = {
      global = {
        timeout = 5;
        #width = "(0,400)";
        #height ="(0,300)";
        width = 400;
        height = 300;
        offset = "0x33";
        format = "<b>%S</b>\n%b";
      };
    };
  };
}
