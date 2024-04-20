{ config, ... }:
{
  programs.starship = {
    enable = true;
    enableZshIntegration = true;
    settings = {
      add_newline = false;
      palette = "dynamic";
      format = ''
        $os$username$hostname$rust$python$node$lua$git_branch$git_status$git_state$fill$nix_shell$time$line_break$directory$sudo$character
      '';
      scan_timeout = 10;
      character = {
        success_symbol = "[ ](blue)";
        error_symbol = "[ ](red)";
      };
      fill = {
        symbol = " ";
      };
      time = {
        disabled = false;
        format = "[ 󰅐 $time ]($style)";
        time_format = "%T";
        style = "fg:bg  bg:cyan bold";
      };
      username = {
        disabled = false;
        style_user = "fg:bg bg:blue bold";
        style_root = "fg:red bg:blue  italic";
        format = "[ $user ]($style)";
        show_always = true;
      };
      hostname = {
        ssh_only = false;
        ssh_symbol = "󰣀 ";
        format = "[ $hostname ]($style)";
        style = " fg:bg bg:dark-cyan bold";
        disabled = false;
      };
      memory_usage = {
        disabled = false;
        threshold = -1;
        symbol = " 󰍛 ";
        format = "[$symbol]($style)[$ram( | $swap) ]($style)";
        style = " fg:bg bg:green";
      };
      directory = {
        read_only = " ";
        home_symbol = " ~";
        truncation_length = 4;
        truncation_symbol = "…/";
        truncate_to_repo = true;
      };
      directory.substitutions = {
        "Documents" = "󰈙 ";
        "Downloads" = " ";
        "Music" = "󰝚 ";
        "Pictures" = " ";
        "Org" = "";
        "Repos" = "";
        "Projects" = "";
        "Mail" = "";
      };
      rust = {
        symbol = "🦀";
        format = "[ $symbol $version ](bg:yellow fg:bg )";
      };
      python = {
        symbol = "";
        format = "[ $symbol $version ](bg:yellow fg:bg )";
      };
      c = {
        symbol = "";
        detect_extensions = ''["c", "h", "cpp"]'';
      };
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
        min_time = 500;
        format = "[ $duration ](fg:yellow bg:dark-gray)";
      };
      git_branch = {
        format = "[ $symbol$branch(:$remote_branch) ](bg:purple fg:bg bold)";
        symbol = " ";
      };
      git_status = {
        format = "([$all_status ](bg:purple fg:bg bold))";
        stashed = " 󰿺";
        modified = " 󱞁";
        untracked = " 󱙓";
        deleted = " 󱙑";
        renamed = " 󱙓";
        staged = " 󰎜";
      };
      palettes.solarized = {
        fg = "#93a1a1";
        fg2 = "#839496";
        fg3 = "#657b83";
        fg4 = "#586e75";
        bg = "#282828";
        bg2 = "#073642";
        red = "#dc322f";
        green = "#b8bb26";
        blue = "#268bd2";
        cyan = "#2aa198";
        dark-cyan = "#2aa198";
        yellow = "#b58900";
        purple = "#6c71c4";
        magenta = "#d33682";
        brwhite = "#fbf1c7";
        white = "#eee8d5";
      };
      palettes.dynamic = {
        fg = "#${config.colorScheme.palette.base06}";
        bg = "#${config.colorScheme.palette.base00}";
        red = "#${config.colorScheme.palette.base08}";
        yellow = "#${config.colorScheme.palette.base0A}";
        dark-yellow = "#${config.colorScheme.palette.base0A}";
        green = "#${config.colorScheme.palette.base0B}";
        dark-green = "#${config.colorScheme.palette.base0B}";
        cyan = "#${config.colorScheme.palette.base0C}";
        dark-cyan = "#${config.colorScheme.palette.base0C}";
        blue = "#${config.colorScheme.palette.base0D}";
        dark-blue = "#${config.colorScheme.palette.base0D}";
        magenta = "#${config.colorScheme.palette.base0E}";
        dark-magenta = "#${config.colorScheme.palette.base0E}";
        orange = "#${config.colorScheme.palette.base09}";
        gray = "#${config.colorScheme.palette.base03}";
        dark-gray = "#${config.colorScheme.palette.base02}";
      };
    };
  };
}
