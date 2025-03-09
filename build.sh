#!/bin/sh
make -j$(nproc --all) clean

cp -vf /usr/src/linux-headers-$(uname -r)/Module.symvers src/os/linux
KBUILD_MODPOST_WARN=1 make -j$(nproc --all) all 

modprobe --dump-modversions src/os/linux/mtutil7601Usta.ko
modprobe --dump-modversions src/os/linux/mt7601Usta.ko
modprobe --dump-modversions src/os/linux/mtnet7601Usta.ko
