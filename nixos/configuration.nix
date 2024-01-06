# _   _ _____  _____  ____
#| \ | |_ _\ \/ / _ \/ ___|
#|  \| || | \  / | | \___ \
#| |\  || | /  \ |_| |___) |
#|_| \_|___/_/\_\___/|____/

# Edit this configuration file to define what should be installed on
# your system. Help is available in the configuration.nix(5) man page, on
# https://search.nixos.org/options and in the NixOS manual (`nixos-help`).

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

  
  nix.settings = {
    experimental-features = ["nix-command" "flakes"];
    auto-optimise-store = true;
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

 # Pick only one of the below networking options.
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
  services.xserver.windowManager.qtile.enable = true;
  services.xserver.windowManager.xmonad = {
        enable = true;
        enableContribAndExtras = true;
  };

  services.xserver.xkb.layout = "us";

  services.printing.enable = true;

  services.pipewire = {
  	enable = true;
	  alsa.enable = true;
  	alsa.support32Bit = true;
  	pulse.enable = true;
  	jack.enable = true;
   };

   services.xbanish = {
		 enable = true;
   };

  # Enable touchpad support (enabled default in most desktopManager).
  services.xserver.libinput.enable = true;
  users.users.ky = {
   shell = pkgs.zsh;
   isNormalUser = true;
   initialPassword = "xd";
   extraGroups = [ "wheel" "libvirt" "video" "audio" "networkmanager"]; 
  };

  # List packages installed in system profile. To search, run:
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

  programs.nano.enable = false;
  virtualisation.libvirtd.enable = true;
  programs.virt-manager.enable = true;
  # List services that you want to enable:

  # Enable the OpenSSH daemon.
  # services.openssh.enable = true;

  # Open ports in the firewall.
  # networking.firewall.allowedTCPPorts = [ ... ];
  # networking.firewall.allowedUDPPorts = [ ... ];
  # Or disable the firewall altogether.
  # networking.firewall.enable = false;

  # Copy the NixOS configuration file and link it from the resulting system
  # (/run/current-system/configuration.nix). This is useful in case you
  # accidentally delete configuration.nix.
  system.copySystemConfiguration = false;

  # This option defines the first version of NixOS you have installed on this particular machine,
  # and is used to maintain compatibility with application data (e.g. databases) created on older NixOS versions.
  #
  # Most users should NEVER change this value after the initial install, for any reason,
  # even if you've upgraded your system to a new NixOS release.
  #
  # This value does NOT affect the Nixpkgs version your packages and OS are pulled from,
  # so changing it will NOT upgrade your system.
  #
  # This value being lower than the current NixOS release does NOT mean your system is
  # out of date, out of support, or vulnerable.
  #
  # Do NOT change this value unless you have manually inspected all the changes it would make to your configuration,
  # and migrated your data accordingly.
  #
  # For more information, see `man configuration.nix` or https://nixos.org/manual/nixos/stable/options#opt-system.stateVersion .
  system.stateVersion = "23.11"; # Did you read the comment?
  
}

