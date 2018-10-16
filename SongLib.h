#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct library { song album[26]; } *Library;

void add_song(Library lib, song s);

song get_song(Library lib, char name[], char artist[]);

song *get_artist(Library lib, char artist[]);

void print_entries(Library lib, char letter);

void print_artist_song(Library lib, char artist[]);

void print_library(Library s);

void shuffle(Library s);

int delete_song(Library s, char name[], char artist[]);




