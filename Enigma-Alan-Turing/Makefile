CC=gcc
BINARY=main
CFILES=main.c
OBJECTS=main.o Enigma/enigma.o

$(BINARY): $(OBJECTS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm $(OBJECTS)
	rm $(BINARY)
