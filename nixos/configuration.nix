{ pkgs, user, host, ... }:
{
  boot.kernelPackages = pkgs.linuxPackages_zen;
  boot.supportedFilesystems = [
    "btrfs"
    "ext4"
  ];

  boot.tmp.cleanOnBoot = true; # this is somehow not on by default

  nixpkgs.config.allowUnfree = true;

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

  services.openssh.enable = true;

  system.stateVersion = "23.11"; # dont change lol
}
