ARG UBUNTU_VERSION=22.04
FROM ubuntu:${UBUNTU_VERSION}

ENV DEBIAN_FRONTEND=noninteractive \
    LANG=en_US.UTF-8 \
    LC_ALL=en_US.UTF-8

ARG LLVM_VERSION=15
ARG LLVM_GPG_FINGERPRINT=6084F3CF814B57C1CF12EFD515CF4D18AF4F7421

RUN mkdir -p /tmp

RUN apt-get update \
    && apt-get -y install --no-install-recommends \
        wget \
        gnupg \
        locales \
        build-essential \
        ca-certificates \
        curl \
        git \
        cmake \
        ninja-build \
    && echo "en_US.UTF-8 UTF-8" > /etc/locale.gen && /usr/sbin/locale-gen

RUN apt-get update \
    && wget -O- https://apt.llvm.org/llvm-snapshot.gpg.key| apt-key add - \
    && echo "deb http://apt.llvm.org/jammy/ llvm-toolchain-jammy main" >> /etc/apt/sources.list \
    && apt-get update \
    && apt-get -y install --no-install-recommends \
        llvm-${LLVM_VERSION} \
        clang-${LLVM_VERSION} \
        lldb-${LLVM_VERSION} \
        libc++-${LLVM_VERSION}-dev \
        libc++abi-${LLVM_VERSION}-dev \
        clang-tidy-${LLVM_VERSION} \
    && ln -s /usr/bin/clang-tidy-${LLVM_VERSION} /usr/bin/clang-tidy \
    && ln -s /usr/bin/lldb-${LLVM_VERSION} /usr/bin/lldb

ENV CC="/usr/bin/clang-${LLVM_VERSION}" \
    CXX="/usr/bin/clang++-${LLVM_VERSION}" \
    LLDB="/usr/bin/lldb-${LLVM_VERSION}" \
    CLANG_TIDY="/usr/bin/clang-tidy-${LLVM_VERSION}" \
    LLVM_VERSION="${LLVM_VERSION}" \
    TEMP="/tmp" \
    HOME=/source
