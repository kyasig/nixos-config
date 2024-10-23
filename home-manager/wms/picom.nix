{ ... }:
{
  services.picom = {
    enable = true;
    vSync = true;
    backend = "glx";
    settings = {
      blur = {
        method = "dual_kawase";
        #size = 3.0;
        strength = 8;
        deviation = 5.0;
      };
    };
  };
}
