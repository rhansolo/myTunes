all: LinkedList.o SongLib.o Driver.o
	gcc LinkedList.o SongLib.o Driver.o
LinkedList.o: LinkedList.c LinkedList.h
	gcc -c LinkedList.c LinkedList.h
SongLib.o: SongLib.c SongLib.h
	gcc -c SongLib.c SongLib.h
Driver.o: Driver.c
	gcc -c Driver.c
run:
	./a.out