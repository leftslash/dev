FROM ubuntu:devel

ENV USER=todd
ENV TZ=America/New_York

RUN echo ${TZ} > /etc/timezone && \
    apt-get update && \
    apt-get install -y tzdata build-essential gdb gcc-15-doc libstdc++-15-doc vim git ssh tree git-doc make-doc vim-doc && \
    rm /etc/localtime && \
    ln -snf /usr/share/zoneinfo/${TZ} /etc/localtime && \
    dpkg-reconfigure -f noninteractive tzdata
    
RUN useradd --create-home --shell /bin/bash ${USER} && \
    mkdir /home/${USER}/workspace && chown ${USER} /home/${USER}/workspace

USER ${USER}

WORKDIR /home/${USER}
