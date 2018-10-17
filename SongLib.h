#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct library { song album[26]; } *Library;

void add_song(Library lib, song s);

song get_song(Library lib, char name[], char artist[]);

void search_artist(Library lib, char artist[]);

void print_letter(Library lib, char letter);

void print_artist_song(Library lib, char artist[]);

void print_library(Library lib);

void shuffle(Library lib);

int delete_song(Library lib, char name[], char artist[]);

void clear_lib(Library lib);





