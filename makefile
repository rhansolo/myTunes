all: LinkedList.o SongLib.o Driver.o
	gcc LinkedList.o SongLib.o Driver.o
LinkedList.o:
	gcc -c LinkedList.c LinkedList.h
SongLib.o:
	gcc -c SongLib.c SongLib.h
Driver.o:
	gcc -c Driver.c
run:
	./a.out