{config, pkgs,...}:
{
  hardware.graphics = {
    enable = true;
    #driSupport = true;
    #driSupport32Bit = true;
  };

  services.xserver.videoDrivers = ["nvidia"];

  hardware.nvidia = {
    modesetting.enable = true;
    powerManagement.enable = true;
    powerManagement.finegrained = true;
    #open = true;
    nvidiaSettings = true;
    package = config.boot.kernelPackages.nvidiaPackages.stable;
  };

  hardware.nvidia.prime = {
    offload = {
        enable = true;
        enableOffloadCmd = true;
    };
    sync.enable = false;
    intelBusId = "PCI:6:0:0";
    nvidiaBusId = "PCI:1:0:0";
  };

  boot.initrd.kernelModules = ["nvidia"];
  boot.extraModulePackages = [config.boot.kernelPackages.nvidia_x11];

  environment.sessionVariables = {
   WLR_NO_HARDWARE_CURSORS = "1";
   NIXOS_OZONE_WL = "1";
  };
}
