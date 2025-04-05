{
  services.picom = {
    enable = true;
    vSync = true;
    backend = "glx";
    settings = {
      #blur = {
      #  method = "dual_kawase";
      #  size = 7.0;
      #  strength = 10;
      #  deviation = 5.0;
      #};
    };
  };
}
