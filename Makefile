CC=gcc
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o binarySearchTree.o stringBuilder.o
	$(CC) $(CFLAGS) main.o binarySearchTree.o stringBuilder.o -o mainapp

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

binarySearchTree.o: binarySearchTree.c
	$(CC) $(CFLAGS) -c binarySearchTree.c

stringBuilder.o: stringBuilder.c
	$(CC) $(CFLAGS) -c stringBuilder.c

clean:
	rm a.out *.o mainapp
