**INSTALLATION**

This has been tested on real hardware and a VM, but this is primarily intended just for me in case I need to reinstall.


Make sure flakes is enabled.
in ``/etc/nixos/configuration.nix``
```
nix.settings.experimental-features = ["nix-command" "flakes"];
```
note that git is not installed by default for whatever reason
install git and neovim (or whatever your preferred text editor is)

rebuild the system with
```
sudo nixos-rebuild switch
```

Clone this repository
```
git clone https://github.com/kyasig/nixos-config.git
```

Change directories into it.
Copy ``hardware-configuration.nix`` into ``nixos``.


rebuild the system
```
sudo nixos-rebuild switch --flake .#sig
```
if installed with a desktop environment that doesn't use systemdboot, run
```
sudo nixos-rebuild switch --install-bootloader --flake .#sig
```



