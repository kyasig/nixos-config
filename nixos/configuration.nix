{ config, lib, pkgs, ... }:

{
  system.activationScripts.diff = {
    supportsDryActivation = true;
    text = ''
      ${pkgs.nvd}/bin/nvd --nix-bin-dir=${pkgs.nix}/bin diff /run/current-system "$systemConfig"
    '';
  };

  imports = [ 
		./hardware-configuration.nix
  ]; 

  
  nix = {
    settings = {
      experimental-features = ["nix-command" "flakes"];
      auto-optimise-store = true;
    };
    gc = {
      automatic = true;
      dates = "weekly";
      options = "--delete-older-than 1d";
    };
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
  environment.variables.EDITOR="nvim";

  boot.supportedFilesystems = ["btrfs"];
  nixpkgs.config.allowUnfree = true;
	
	boot.initrd.kernelModules = ["nvidia"];
	boot.extraModulePackages = [config.boot.kernelPackages.nvidia_x11];

  boot.loader.systemd-boot.enable = true;
  boot.loader.efi.canTouchEfiVariables = true;

  networking.hostName = "sig"; 

  security.rtkit.enable = true;
	security.polkit.enable = true;
  systemd = {
   user.services.polkit-gnome-authentication-agent-1 = {
    description = "polkit-gnome-authentication-agent-1";
    wantedBy = [ "graphical-session.target" ];
    wants = [ "graphical-session.target" ];
    after = [ "graphical-session.target" ];
    serviceConfig = {
        Type = "simple";
        ExecStart = "${pkgs.polkit_gnome}/libexec/polkit-gnome-authentication-agent-1";
        Restart = "on-failure";
        RestartSec = 1;
        TimeoutStopSec = 10;
      };
   };
  };

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
      inconsolata
      font-awesome
	    noto-fonts-cjk-sans
	    mononoki
    ];
  };

  powerManagement.enable = true;
  services.tlp.enable = true;


  services.xserver.enable = true;
  services.xserver.windowManager.xmonad = {
        enable = true;
        enableContribAndExtras = true;
  };
  services.xbanish.enable = true;

  services.xserver.displayManager.sessionCommands = ''
    xset -dpms  # Disable Energy Star, as we are going to suspend anyway and it may hide "success" on that
    xset s blank # `noblank` may be useful for debugging 
    xset s 300 # seconds
    ${pkgs.lightlocker}/bin/light-locker --idle-hint &
  '';

  systemd.targets.hybrid-sleep.enable = true;
  services.logind.extraConfig = ''
    IdleAction=hybrid-sleep
    IdleActionSec=20s
  '';


  services.xserver.xkb.layout = "us";

  services.printing.enable = true;

  services.pipewire = {
  	enable = true;
	  alsa.enable = true;
  	alsa.support32Bit = true;
  	pulse.enable = true;
  	jack.enable = true;
   };


  services.xserver.libinput.enable = true; #trackpad

  users.users.ky = {
   shell = pkgs.zsh;
   isNormalUser = true;
   initialPassword = "xd";
   extraGroups = [ "wheel" "libvirt" "video" "audio" "networkmanager"]; 
  };

  environment.systemPackages = with pkgs; [
		git
		neovim
    polkit_gnome
		unzip
		vim
		wget	
  ];

  # Some programs need SUID wrappers, can be configured further or are
  # started in user sessions.
  programs.zsh.enable = true;
  programs.mtr.enable = true;
  programs.gnupg.agent = {
    enable = true;
    enableSSHSupport = true;
   };
  programs.neovim = { 
      defaultEditor = true;
  };
  programs.light.enable = true;
  programs.nano.enable = false;
  virtualisation.libvirtd.enable = true;
  programs.virt-manager.enable = true;
  
  #I LOVE GAMING RAAAHH
  programs.steam = {
   enable = true;
   remotePlay.openFirewall = true; # Open ports in the firewall for Steam Remote Play
   dedicatedServer.openFirewall = true; # Open ports in the firewall for Source Dedicated Server
  };

  nixpkgs.config.allowUnfreePredicate = pkg: builtins.elem (lib.getName pkg) [
    "steam"
    "steam-original"
    "steam-run"
    "steamcmd"
    "steam-tui"
  ];
  
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

