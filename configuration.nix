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
  imports = [ 
		./hardware-configuration.nix
    ]; 

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
      jetbrains-mono
	  noto-fonts-cjk-sans
	  terminus_font
	  mononoki
    ];
  };

  services.xserver.enable = true;
  services.xserver.windowManager.qtile.enable = true;
  services.picom.enable = true;

  # services.xserver.xkb.layout = "us";
  # services.xserver.xkb.options = "eurosign:e,caps:escape";

  services.printing.enable = true;

  security.rtkit.enable = true;
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
   isNormalUser = true;
   extraGroups = [ "wheel" ]; 
   packages = with pkgs; [
    alacritty
	betterlockscreen
	discord
	dmenu
	flameshot
	ghc
	librewolf
	mpv
	nitrogen
	obs-studio
	pulsemixer
	qbittorrent
	stow
	sxiv
	thunderbird
	vlc
	vscodium
   ];
  };


  # List packages installed in system profile. To search, run:
  environment.systemPackages = with pkgs; [
	bat
	btop
	cmatrix
	git
	killall
	neofetch
	neovim
	pfetch-rs
	ranger
	unzip
	vim
	wget	
  ];

  # Some programs need SUID wrappers, can be configured further or are
  # started in user sessions.
   programs.mtr.enable = true;
   programs.gnupg.agent = {
     enable = true;
     enableSSHSupport = true;
   };
  programs.neovim = { 
      defaultEditor = true;
  };

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
  
  nix.settings.experimental-features = ["nix-command" "flakes"];
}

