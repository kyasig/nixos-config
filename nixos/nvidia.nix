{config, lib,...}:
{
  options = {
    nvidia.enable = lib.mkEnableOption "nvidia gpu";
  };

  nvidia.enable = lib.mkDefault false;

  config = lib.mkIf config.nvidia.enable{
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
      nvidiaSettings = true;
      package = config.boot.kernelPackages.nvidiaPackages.stable;
      open = true;
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
  };
}
