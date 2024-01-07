{ config, lib, pkgs, ... }:
let 
  picomPackage = pkgs.picom;
in{
  services.picom = if picomPackage = pkgs.picom-allusive then{
    enable = true;
    package = picomPackage;
    vSync = true;
    backend = "glx";
    settings =  {
      animation-open-exclude = [ # the animations are actually annoying lol
         "class_g = 'xmobar'"
       ];
       animation-unmap-exclude = [
         "class_g = 'xmobar'"
       ];
       blur-background = true; #BLURRING DOESNT WORK RAAAHHH
       blur-method = "dual_kawase";
       blur-strength = 5;

       blur-whitelist = true;

       blur-include = [
        "class_g = 'Alacritty'"
       ];
    };
  }else {
    enable = true;
    package = picomPackage;
    vSync = true;
    backend = "glx";
    settings =  {
      blur ={
        method = "dual_kawase"; # ALSO DOESNT WORK GRR
        size = 10;
        deviation = 5.0;
      };
    };
  };
}
