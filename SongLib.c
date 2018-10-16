#include "SongLib.h"

void add_song(Library lib, song s){
	song start = lib->album[(char)((s->name)[0]) - 'A'];
	if (start == NULL){
		lib->album[(s->name)[0] - 'A'] = s;
	}
	add_node(start,s);
}

song get_song(Library lib, char name[], char artist[]){
	song start = lib->album[(char)name[0] - 'A'];
	return get_node(start,name,artist);
}

song *get_artist(Library lib, char artist[]){
	return NULL;
}

void print_entries(Library lib, char letter){
	song start = lib->album[letter - 'A'];
	while (start != NULL){
		printf("%s:%s|",start->artist,start->name);
		start = start -> next;
	}
}

void print_artist_song(Library lib, char artist[]){
	song start = lib->album[artist[0] - 'A'];
	int counter = 0;
	while (start != NULL){
		if (strcmp(start->artist,artist) == 0){
			printf("%s:%s|",start->artist,start->name);
			counter+=1;
		}
		start = start -> next;
	}
	if (! counter){
		printf("Artist Not Found");
	}
}

void print_library(Library s){
	for (int i = 0; i < 10; i++){
		song start = (s -> album)[i];
		if (start != NULL){
			// print_entries(s,(char)(i+(int)'A'));
			print_list(start);
		}
	}
}

void shuffle(Library s){
	return;
}	

int delete_song(Library s, char name[], char artist[]){
	return 0;
}


