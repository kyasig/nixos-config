{ config, lib, pkgs, user, host,... }:
{
  boot.kernelPackages = pkgs.linuxPackages_zen;
  boot.loader.systemd-boot.enable = true;
  boot.loader.efi.canTouchEfiVariables = true;
  boot.supportedFilesystems = ["btrfs" "ext4"];

  nixpkgs.config.allowUnfree = true;

  networking.hostName = "${host}";
  networking.networkmanager.enable = true;

  time.timeZone = "America/Los_Angeles";
  i18n.defaultLocale = "en_US.UTF-8";

  i18n.inputMethod.enabled = "ibus";
  i18n.inputMethod.ibus.engines = with pkgs.ibus-engines; [libpinyin];

  powerManagement.enable = true;
  services.tlp.enable = true;

  services.printing.enable = true;
  services.udev.packages = with pkgs; [platformio-core.udev];

  users ={
    defaultUserShell = pkgs.zsh;
    users.${user} = {
      isNormalUser = true;
      initialPassword = "xd";
      extraGroups = [ "wheel" "libvirt" "video" "audio" "networkmanager"];
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

  system.activationScripts.diff = {
    supportsDryActivation = true;
    text = ''
      ${pkgs.nvd}/bin/nvd --nix-bin-dir=${pkgs.nix}/bin diff /run/current-system "$systemConfig"
    '';
  };

  system.stateVersion = "23.11"; # dont change lol

}
