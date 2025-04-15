{
  pkgs,
  user,
  host,
  config,
  ...
}:
{
  boot.kernelPackages = pkgs.linuxPackages_zen;
  boot.supportedFilesystems = [
    "btrfs"
    "ext4"
  ];

  boot.tmp.cleanOnBoot = true; # this is somehow not on by default


  networking.networkmanager.enable = true;
  networking.hostName = "${host}";

  time.timeZone = "America/Los_Angeles";
  i18n.defaultLocale = "en_US.UTF-8";

  services.printing.enable = true;

  users = {
    defaultUserShell = pkgs.zsh;
    users.${user} = {
      isNormalUser = true;
      initialPassword = "xd";
      extraGroups = [
        "wheel"
        "libvirt"
        "video"
        "audio"
        "networkmanager"
      ];
    };
  };

  services.devmon.enable = true;
  services.gvfs.enable = true;
  services.udisks2.enable = true;

  programs.fzf.keybindings = true;

  programs.gnupg.agent = {
    enable = true;
    enableSSHSupport = true;
  };

  stylix = {
    enable = true;
    polarity = "dark";
    fonts = {
      sizes = {
        applications = 10;
        popups = 10;
        terminal = 14;
      };
      monospace = {
        package = pkgs.nerd-fonts.jetbrains-mono;
        name = "JetbBrains Mono";
      };
      serif = config.stylix.fonts.monospace;
      sansSerif = config.stylix.fonts.monospace;
      emoji = config.stylix.fonts.monospace;
    };
    opacity.terminal = 0.90;
    override = {
      #base0E = "f3b8e4";
    };
  };

  services.openssh.enable = true;

  system.stateVersion = "23.11"; # dont change lol
}
