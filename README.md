**INSTALLATION**
Just for me in case I need to reinstall.

Make sure flakes is enabled. 
in ``configuration.nix``
```
nix.settings.experimental-features = ["nix-command" "flakes"];
```

Clone this repository
```
git clone https://github.com/kyasig/nixos-config.git
```

Change directories into it. Copy ``hardware-configuration.nix`` into appropriate subdirectory. Then run
```
sudo nixos-rebuild switch --flake .#sig
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
