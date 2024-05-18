{ config, lib, pkgs, ... }:
{
services.picom = {
    enable = true;
    vSync = true;
    #backend = "glx";
    settings =  {
      blur ={
        method = "dual_kawase";
        #size = 3.0;
        strength = 5;
        #deviation = 5.0;
      };
    };
  };
}

