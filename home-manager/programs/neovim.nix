{ config, ... }:
{
  programs.nixvim = {
    enable = true;

    defaultEditor = true;
    viAlias = true;
    vimAlias = true;

    globals = {
      mapleader = " ";
      maplocalleader = " ";
    };

    opts = {
      number = true;
      relativenumber = true;
      cursorline = true;
      cursorcolumn = true;
      confirm = true;
      smartindent = true;
      expandtab = true;
      shiftwidth = 2;
      tabstop = 2;
      ignorecase = true;
      smartcase = true;
      showmode = true;
      hlsearch = true;
      wildmenu = true;
    };
    autoCmd = [
      {
        event = "BufWritePre";
        pattern = "*";
        command = "silent! %s/\\s\\+$//e";
      }
      {
        event = "InsertEnter";
        pattern = "*";
        command = "norm zz";
      }
    ];
    plugins = {
      autoclose.enable = true;
      web-devicons.enable = true;
      vimtex = {
        enable = true;
        settings = {
          compiler_method = "latexrun";
          view_method = "zathura";
        };
      };
      lsp = {
        enable = true;
        servers = {
          nixd.enable = true;
          texlab.enable = true;
          ccls.enable = true;
        };
      };
      treesitter = {
        enable = true;
        settings = {
          indent.enable = true;
          ensure_installed = [
            "c"
            "haskell"
            "rust"
            "python"
            "latex"
            "cpp"
            "vim"
            "bash"
            "diff"
            "nix"
          ];
          highlight.enable = true;
        };
      };
      lualine = {
        enable = true;
        settings = {
          sections = {
            lualine_a = [ "mode" ];
            lualine_b = [
              "branch"
              "diff"
              "diagnostics"
            ];
            lualine_c = [ "filename" ];
            lualine_x = [ "filetype" ];
            lualine_y = [ "progress" ];
            lualine_z = [ ''" " .. os.date("%R")'' ];
          };
          options = {
            alwaysDivideMiddle = true;
            componentSeparators = {
              left = "|";
              right = "|";
            };
          };
        };
      };
      telescope = {
        enable = true;
        extensions = {
          fzf-native.enable = true;
        };
        keymaps = {
          "<leader>ff" = {
            action = "find_files";
          };
          "<leader>fb" = {
            action = "buffers";
          };
        };
      };
    };
    colorschemes.base16 = {
      enable = true;
      colorscheme = {
        base00 = "#${config.lib.stylix.colors.base00}";
        base01 = "#${config.lib.stylix.colors.base01}";
        base02 = "#${config.lib.stylix.colors.base02}";
        base03 = "#${config.lib.stylix.colors.base03}";
        base04 = "#${config.lib.stylix.colors.base04}";
        base05 = "#${config.lib.stylix.colors.base05}";
        base06 = "#${config.lib.stylix.colors.base06}";
        base07 = "#${config.lib.stylix.colors.base07}";
        base08 = "#${config.lib.stylix.colors.base08}";
        base09 = "#${config.lib.stylix.colors.base09}";
        base0A = "#${config.lib.stylix.colors.base0A}";
        base0B = "#${config.lib.stylix.colors.base0B}";
        base0C = "#${config.lib.stylix.colors.base0C}";
        base0D = "#${config.lib.stylix.colors.base0D}";
        base0E = "#${config.lib.stylix.colors.base0E}";
        base0F = "#${config.lib.stylix.colors.base0F}";
      };
    };
  };
}
