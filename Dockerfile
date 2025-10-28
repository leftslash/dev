FROM ubuntu:devel

ENV USER=todd
ENV TZ=America/New_York

ENV DEBIAN_FRONTEND=noninteractive
RUN echo ${TZ} > /etc/timezone 
RUN apt-get update
RUN apt-get install -y tzdata
RUN apt-get install -y unminimize
RUN yes | unminimize
RUN apt-get install -y build-essential cmake pkg-config gdb
RUN apt-get install -y gcc-15-doc clang-20-doc git-doc make-doc libstdc++-15-doc
RUN apt-get install -y clang-20-examples clang-format-20 clang-tidy-20 clang-tools-20
RUN apt-get install -y libclang-20-dev libclang-common-20-dev
RUN apt-get install -y vim git ssh tree
RUN apt-get install -y emscripten valgrind
RUN apt-get install -y file
RUN apt-get install -y locales
RUN apt-get install -y curl man-db man
RUN apt-get install -y splint
RUN sed -i '/en_US.UTF-8/s/^#//' /etc/locale.gen && locale-gen
RUN rm /etc/localtime
RUN ln -snf /usr/share/zoneinfo/${TZ} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

RUN useradd --create-home --shell /bin/bash ${USER} && \
    mkdir /home/${USER}/workspace && chown ${USER} /home/${USER}/workspace

USER ${USER}

WORKDIR /home/${USER}

ENV LC_ALL=en_US.UTF-8
ENV LANG=en_US.UTF-8
ENV LANGUAGE=en_US.UTF-8

# vi: set cc=80: */
