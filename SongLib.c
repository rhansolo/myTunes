#include "SongLib.h"

void add_song(Library lib, song s){
	song start = lib->album[(char)((s->artist)[0]) - 'A'];
	if (start == NULL){
		lib->album[(s->artist)[0] - 'A'] = s;
		return;
	}
	add_node(start,s);
}

song get_song(Library lib, char name[], char artist[]){
	song start = lib->album[(char)artist[0] - 'A'];
	return get_node(start,name,artist);
}

void search_artist(Library lib, char artist[]){
	song start = lib->album[(char)artist[0] - 'A'];
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
	printf("\n");
}

void print_letter(Library lib, char letter){
	song start = lib->album[letter - 'A'];
	while (start != NULL){
		printf("%s:%s|",start->artist,start->name);
		start = start -> next;
	}
	printf("\n");
}

void print_artist_song(Library lib, char artist[]){
	song start = lib->album[artist[0] - 'A'];
	int counter = 0;
	while (start != NULL){
		if (strcmp(start->artist,artist) == 0){
			printf("[%s:%s]\n",start->artist,start->name);
			counter+=1;
		}
		start = start -> next;
	}
	if (! counter){
		printf("Artist Not Found");
	}
}

void print_library(Library lib){
	int counter = 0;
	for (int i = 0; i < 26; i++){
		song start = (lib->album)[i];
		if (start != NULL){
			// print_entries(s,(char)(i+(int)'A'));
			printf("%c list:\n",(char)(i+(int)'A'));
			print_list(start);
			printf("\n");
			counter+=1;
		}
	}
	if (counter == 0){
		printf("%s\n","Library Is Empty");
	}
}

void shuffle(Library lib){
	srand(time(NULL));
	for (int i = 0; i < 3; i++){
		int index = rand() % 26;
		song temp = lib->album[index];
		while (temp == NULL){
			index = rand() % 26;
			temp = lib->album[index];
		}
		print_node(get_randnode(temp));
		printf(" | ");
	}
	printf("\n");
	return;
}	

int delete_song(Library lib, char name[], char artist[]){
	song start = lib->album[artist[0] - 'A'];
	remove_node(start,name,artist);
	return 0;
}

void clear_lib(Library lib){
	for (int i = 0; i < 26; i++){
		lib->album[i] = free_list(lib->album[i]);
	}
}

