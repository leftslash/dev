" curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
call plug#begin('~/.vim/plugged')
Plug 'vim-airline/vim-airline'
Plug 'tpope/vim-fugitive'
Plug 'nordtheme/vim'
call plug#end()

colorscheme nord

syntax on
set background=dark
set noshowmode

set splitbelow
set splitright
set laststatus=2
set encoding=utf-8
set ttimeoutlen=50
set sw=2
set ts=2
set expandtab
set number
set colorcolumn=80
set modeline
set modelines=5
set backupcopy=yes
set autowrite
set nocompatible
set nobackup
set nowritebackup
set noswapfile
set shell=bash
set shellcmdflag=-ic
set exrc

autocmd BufNewFile *.c 0r ~/skeletons/main.c
