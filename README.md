**INSTALLATION**

This has been tested and verified to work in a VM but not baremetal.
This is primarily intended just for me in case I need to reinstall.


Make sure flakes is enabled.
in ``/etc/nixos/configuration.nix``
```
nix.settings.experimental-features = ["nix-command" "flakes"];
```
note that git is not installed by default for whatever reason
install git and neovim (or whatever your preferred text editor is)

Clone this repository
```
git clone https://github.com/kyasig/nixos-config.git
```

Change directories into it.
Copy ``hardware-configuration.nix`` into ``nixos``. Then run

```
sudo nixos-rebuild switch --flake .#sig
```
if installed with a desktop environment that doesn't use systemdboot, run
```
sudo nixos-rebuild switch --install-bootloader --flake .#sig
```

Install Home Manager
```
nix-channel --add https://github.com/nix-community/home-manager/archive/release-23.11.tar.gz home-manager
nix-channel --update
```

There's this annoying bug where you have to reboot before running this
```
nix-shell '<home-manager>' -A install
```
Switch home-manager generations
```
home-manager switch --flake .#ky
```
