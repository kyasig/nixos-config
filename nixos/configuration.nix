{ config, lib, pkgs, ... }:

{
  imports = [ 
		./hardware-configuration.nix
    ./xorg.nix
    ./audio.nix
    ./auth.nix
    ./nix.nix
  ]; 

  system.activationScripts.diff = {
    supportsDryActivation = true;
    text = ''
      ${pkgs.nvd}/bin/nvd --nix-bin-dir=${pkgs.nix}/bin diff /run/current-system "$systemConfig"
    '';
  };
  
  hardware.opengl = {
  	enable = true;
	  driSupport = true;
	  driSupport32Bit = true;
  };

  services.xserver.videoDrivers = ["nvidia"];

  hardware.nvidia = {
    modesetting.enable = true;
    powerManagement.enable = true;
    powerManagement.finegrained = true;
    open = true;
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


  boot.kernelPackages = pkgs.linuxPackages_zen;

  boot.supportedFilesystems = ["btrfs"];
  nixpkgs.config.allowUnfree = true;
	
	boot.initrd.kernelModules = ["nvidia"];
	boot.extraModulePackages = [config.boot.kernelPackages.nvidia_x11];

  boot.loader.systemd-boot.enable = true;
  boot.loader.efi.canTouchEfiVariables = true;

  networking.hostName = "sig"; 

  networking.networkmanager.enable = true;  

  time.timeZone = "America/Los_Angeles";

  # Configure network proxy if necessary
  # networking.proxy.default = "http://user:password@proxy:port/";
  # networking.proxy.noProxy = "127.0.0.1,localhost,internal.domain";

  i18n.defaultLocale = "en_US.UTF-8";
  # console = {
  #   font = "Lat2-Terminus16";
  #   keyMap = "us";
  #   useXkbConfig = true; # use xkb.options in tty.
  # };
  fonts = {
    enableGhostscriptFonts = true;
    packages = with pkgs; [
      noto-fonts
      noto-fonts-extra
	    noto-fonts-cjk-sans
	    noto-fonts-cjk-serif
      inconsolata
      font-awesome
	    mononoki
    ];
  };

  powerManagement.enable = true;
  services.tlp.enable = true;


  services.printing.enable = true;

  users.users.ky = {
   isNormalUser = true;
   initialPassword = "xd";
   extraGroups = [ "wheel" "libvirt" "video" "audio" "networkmanager"]; 
  };

  environment.systemPackages = with pkgs; [
		git
		neovim
		unzip
		vim
		wget	
  ];

  programs.zsh.enable = true;
  environment.shells = [pkgs.zsh];
  users.defaultUserShell = pkgs.zsh;

  programs.mtr.enable = true;
  programs.gnupg.agent = {
    enable = true;
    enableSSHSupport = true;
   };
  programs.neovim = { 
      defaultEditor = true;
  };
  programs.nano.enable = false;
  virtualisation.libvirtd.enable = true;
  programs.virt-manager.enable = true;
  
  
  # Enable the OpenSSH daemon.
   services.openssh.enable = true;

  # Open ports in the firewall.
  # networking.firewall.allowedTCPPorts = [ ... ];
  # networking.firewall.allowedUDPPorts = [ ... ];
  # Or disable the firewall altogether.
  # networking.firewall.enable = false;

  #keep false for flakes 
  system.copySystemConfiguration = false;

  
  system.stateVersion = "23.11"; # dont change lol
  
}

