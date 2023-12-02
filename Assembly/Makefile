all:
	mkdir -p ./bin
	nasm -f bin ./hello.asm -o ./bin/hello.bin
	qemu-system-x86_64 -hda ./bin/hello.bin

clean:
	rm -r ./bin
