{lib,inputs,...}:
{
  nix = {
    settings = {
      experimental-features = [
        "nix-command"
        "flakes"
        "pipe-operators"
      ];
      auto-optimise-store = true;
    };
    channel.enable = false;
    registry = (lib.mapAttrs (_: flake: { inherit flake; }) inputs);
    nixPath = lib.mapAttrsToList (n: _: "${n}=flake:${n}") inputs;
    settings = {
        nix-path = lib.mapAttrsToList (n: _: "${n}=flake:${n}") inputs;
        flake-registry = ""; # optional, ensures flakes are truly self-contained
    };
    gc = {
      automatic = true;
      dates = "daily";
      options = "--delete-older-than 5d";
    };
  };
}
