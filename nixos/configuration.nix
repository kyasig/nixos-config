{ config, lib, pkgs, ... }:
{
  boot.kernelPackages = pkgs.linuxPackages_zen;
  boot.loader.systemd-boot.enable = true;
  boot.loader.efi.canTouchEfiVariables = true;
  boot.supportedFilesystems = ["btrfs" "ext4"];

  nixpkgs.config.allowUnfree = true;

  networking.hostName = "sig"; 
  networking.networkmanager.enable = true;  

  time.timeZone = "America/Los_Angeles";
  i18n.defaultLocale = "en_US.UTF-8";

  powerManagement.enable = true;
  services.tlp.enable = true;

  services.printing.enable = true;

  users ={
    defaultUserShell = pkgs.zsh;
    users.ky = {
      isNormalUser = true;
      initialPassword = "xd";
      extraGroups = [ "wheel" "libvirt" "video" "audio" "networkmanager"]; 
    };
  };

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
