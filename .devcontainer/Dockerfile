FROM docker.m.daocloud.io/library/gcc:14.3.0
USER root

RUN touch /etc/apt/sources.list \
    && echo "deb http://mirrors.aliyun.com/debian/ bookworm main contrib non-free" > /etc/apt/sources.list \
    && echo "deb http://mirrors.aliyun.com/debian/ bookworm-updates main contrib non-free" >> /etc/apt/sources.list \
    && echo "deb http://mirrors.aliyun.com/debian/ bookworm-backports main contrib non-free" >> /etc/apt/sources.list \
    && echo "deb http://mirrors.aliyun.com/debian-security bookworm-security main contrib non-free" >> /etc/apt/sources.list

RUN apt-get update \
    && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    cmake \
    cppcheck \
    valgrind \
    clang \
    clang-format \
    clang-tidy \
    gdb \
    clangd \
    git \
    wget \
    curl \
    vim \
    tree \
    ripgrep \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
