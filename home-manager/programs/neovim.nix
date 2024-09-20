  {config, ...}:
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
          rust-analyzer.enable = true;
          nixd.enable = true;
          texlab.enable = true;
        };
      };
    };

    colorschemes.base16 = {
      enable = true;
      colorscheme = {
        base00 = "#${config.colorScheme.palette.base00}";
        base01 = "#${config.colorScheme.palette.base01}";
        base02 = "#${config.colorScheme.palette.base02}";
        base03 = "#${config.colorScheme.palette.base03}";
        base04 = "#${config.colorScheme.palette.base04}";
        base05 = "#${config.colorScheme.palette.base05}";
        base06 = "#${config.colorScheme.palette.base06}";
        base07 = "#${config.colorScheme.palette.base07}";
        base08 = "#${config.colorScheme.palette.base08}";
        base09 = "#${config.colorScheme.palette.base09}";
        base0A = "#${config.colorScheme.palette.base0A}";
        base0B = "#${config.colorScheme.palette.base0B}";
        base0C = "#${config.colorScheme.palette.base0C}";
        base0D = "#${config.colorScheme.palette.base0D}";
        base0E = "#${config.colorScheme.palette.base0E}";
        base0F = "#${config.colorScheme.palette.base0F}";
      };
    };
  };
}
