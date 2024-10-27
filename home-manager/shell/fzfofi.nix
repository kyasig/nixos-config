{ pkgs, ... }:

pkgs.writeShellScriptBin "fzfofi" ''
$(echo -n "$PATH" | xargs -d: -I{} -r find -L {} -maxdepth 1 -mindepth 1 -type f -executable -printf '%P\n' 2>/dev/null | sort -u | fzf)
''
