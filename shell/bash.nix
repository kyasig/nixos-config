{ config, pkgs, ...}:

{
 programs.bash = {
    enable = true;
    shellAliases = {
      "xd" = "echo xd";
      "c" = "clear";
      "listgens" = "sudo nix-env -p /nix/var/nix/profiles/system --list-generations";
      "deletegens" = "sudo nix-env -p /nix/var/nix/profiles/system --delete-generations";
      "vim" = "nvim";
    };
  };
}

