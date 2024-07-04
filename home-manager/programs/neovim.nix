{ config, pkgs,inputs, ...}:
{
  programs.neovim = {
    enable = true;
    extraConfig = ''
			set mouse=a
			syntax on
			set number
    	set relativenumber
			set termguicolors
			set cursorline
			set cursorcolumn

			set backspace=indent,eol,start
			set confirm
      set autoindent

			set expandtab
			set shiftwidth=2
			set tabstop=2

			set ignorecase
			set smartcase
			set showmode
			set hlsearch
			set wildmenu

			autocmd InsertEnter * norm zz
			autocmd BufWritePre * %s/\s\+$//e

      map <A-h> <C-w>h
      map <A-j> <C-w>j
      map <A-k> <C-w>k
      map <A-l> <C-w>l

      nnoremap S :%s//gI<Left><Left><Left>

			:let mapleader = "\<Space>"
      nnoremap <leader>nn :NERDTree<CR>
      nnoremap <leader>nc :NERDTreeClose<CR>
      nnoremap <leader>gg :Goyo<CR>

      inoremap { {}<Esc>ha
      inoremap ( ()<Esc>ha
      inoremap [ []<Esc>ha
      inoremap " ""<Esc>ha
      inoremap ' ' '<Esc>hxi
      inoremap ` ``<Esc>ha
    '';
		extraLuaConfig = ''
			local builtin = require('telescope.builtin')
			vim.keymap.set('n', '<leader>ff', builtin.find_files, {})
			vim.keymap.set('n', '<leader>fb', builtin.buffers, {})
		'';
		plugins = with pkgs.vimPlugins;[
			vim-airline
			telescope-nvim
      nerdtree
      goyo-vim
      lean-nvim
		];
  };
}
