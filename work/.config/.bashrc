# Custom additions to .bashrc.
set -o vi
alias c='clear'
alias d='ls -alFh'
alias t='tree'

export PS1='\[\e[0;33m\]\u@docker\[\e[m\] \[\e[0;34m\]\w\[\e[m\]\n\[\e[0;33m\]>\[\e[m\] '
