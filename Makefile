all:
	make -j$(nproc --all) -C src/ osutil
	make -j$(nproc --all) -C src/ build_tools
	make -j$(nproc --all) -C src/ osdrv
	make -j$(nproc --all) -C src/ osnet

clean:
	make -j$(nproc --all) -C src/ clean

install:
	make -j$(nproc --all) -C src/ install

uninstall:
	make -j$(nproc --all) -C src/ uninstall
