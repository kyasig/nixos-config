{ config, lib,... }:
{
  programs.starship = {
    enable = true;
    enableZshIntegration = true;
    settings = {
      palette = lib.mkForce "dynamic";
      scan_timeout = 10;
      character = {
        success_symbol = " [╰─⮞  ](bold magenta)";
        error_symbol = " [╰─⮞  ](bold red)";
      };
      time = {
        disabled = true;
        format = " 🕙 $time($style)\n";
        time_format = "%r";
        use_12hr = true;
        style = "fg:cyan bold";
      };
      username = {
        disabled = false;
        style_user = "fg:magenta";
        style_root = "fg:red bg:blue  italic";
        format = " [╭─$user]($style)@";
        show_always = true;
      };
      hostname = {
        ssh_only = false;
        ssh_symbol = "󰣀 ";
        format = "[$hostname]($style) in ";
        style = " fg:yellow";
        disabled = false;
      };
      directory = {
        read_only = " ";
        #home_symbol = "~";
        truncation_length = 0;
        truncation_symbol = "…/";
        truncate_to_repo = true;
        substitutions = {
          "Documents" = "󰈙 ";
          "Downloads" = " ";
          "Music" = "󰝚 ";
          "Pictures" = " ";
        };
      };
      rust = {
        symbol = "🦀";
        format = "[ $symbol $version ](bg:yellow fg:bg )";
      };
      python = {
        symbol = "";
        format = "[ $symbol $version ](bg:yellow fg:bg )";
      };
      # c = {
      #   symbol = "";
      #   detect_extensions = ''["c", "h", "cpp"]'';
      # };
      lua = {
        symbol = "";
        format = "[ $symbol $version ](bg:blue fg:bg)";
      };
      os = {
        disabled = true;
        style = "bg:blue";
        symbols = {
          Arch = "[  ](fg:bg $style)";
          NixOS = "[  ](fg:bg $style)";
          Macos = "[  ](fg:bg $style)";
          Void = "[  ](fg:bg bg:green)";
          Linux = "[  ](fg:bg $style)";
        };
      };
      nix_shell = {
        disabled = false;
        symbol = "";
        format = "[ $symbol $state ](bg:blue fg:bg bold)";
      };
      cmd_duration = {
        min_time = 1;
        format = "took [$duration](fg:yellow)";
      };
      git_branch = {
        format = "[$symbol$branch(:$remote_branch) ](fg:purple bold)";
        symbol = " ";
        disabled = false;
      };
      git_status = {
        disabled = false;
        #stashed = " 󰿺";
        #modified = " 󱞁";
        #untracked = " 󱙓";
        #deleted = " 󱙑";
        #renamed = " 󱙓";
        #staged = " 󰎜";
        #style = "white";
      };
      palettes.dynamic = {
        fg = "#${config.lib.stylix.colors.base06}";
        bg = "#${config.lib.stylix.colors.base00}";
        red = "#${config.lib.stylix.colors.base08}";
        yellow = "#${config.lib.stylix.colors.base0A}";
        dark-yellow = "#${config.lib.stylix.colors.base0A}";
        green = "#${config.lib.stylix.colors.base0B}";
        dark-green = "#${config.lib.stylix.colors.base0B}";
        cyan = "#${config.lib.stylix.colors.base0C}";
        dark-cyan = "#${config.lib.stylix.colors.base0C}";
        blue = "#${config.lib.stylix.colors.base0D}";
        dark-blue = "#${config.lib.stylix.colors.base0D}";
        magenta = "#${config.lib.stylix.colors.base0E}";
        dark-magenta = "#${config.lib.stylix.colors.base0E}";
        orange = "#${config.lib.stylix.colors.base09}";
        gray = "#${config.lib.stylix.colors.base03}";
        dark-gray = "#${config.lib.stylix.colors.base02}";
      };
    };
  };
}
