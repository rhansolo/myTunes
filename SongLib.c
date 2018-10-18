#include "SongLib.h"

void add_song(Library lib, song s){
	song start; 
	if ((s->artist)[0] - 'a' > 0){
		start = lib->album[(s->artist)[0]-'a'];
		if (start == NULL){
			lib->album[(s->artist)[0] - 'a'] = s;
		return;
	}
	}
	else{
		start = lib->album[(s->artist)[0]-'A'];
		if (start == NULL){
			lib->album[(s->artist)[0] - 'A'] = s;
		return;
	}
	}
	add_node(start,s);
}

song get_song(Library lib, char name[], char artist[]){
	song start;
	if (artist[0]-'a' >= 0){
		start = lib->album[artist[0] - 'a'];
	}
	else{
		start = lib->album[artist[0] - 'A'];
	}
	return get_node(start,name,artist);
}

void search_artist(Library lib, char artist[]){
	song start;
	if (artist[0]-'a' >= 0){
		start = lib->album[artist[0] - 'a'];
	}
	else{
		start = lib->album[artist[0] - 'A'];
	}
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
	song start;
	if (letter-'a' >= 0){
		start = lib->album[letter - 'a'];
	}
	else{
		start = lib->album[letter - 'A'];
	}
	if (start == NULL){
		printf("No Author with letter %c\n",letter);
	}
	while (start != NULL){
		printf("%s:%s|",start->artist,start->name);
		start = start -> next;
	}
	printf("\n");
}

void print_artist_song(Library lib, char artist[]){
	song start;
	if (artist[0]-'a' >= 0){
		start = lib->album[artist[0] - 'a'];
	}
	else{
		start = lib->album[artist[0] - 'A'];
	}
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
		song temp = lib->album[rand() % 26];
		while (temp == NULL){
			temp = lib->album[rand() % 26];
		}
		print_node(get_randnode(temp));
	}
	printf("\n");
	return;
}	

int delete_song(Library lib, char name[], char artist[]){
	song start;
	if (artist[0]-'a' >= 0){
		start = lib->album[artist[0] - 'a'];
		lib->album[artist[0] - 'a'] = remove_node(start,name,artist);
	}
	else{
		start = lib->album[artist[0] - 'A'];
		lib->album[artist[0] - 'A'] = remove_node(start,name,artist);
	}
	return 0;
}

void clear_lib(Library lib){
	for (int i = 0; i < 26; i++){
		lib->album[i] = free_list(lib->album[i]);
	}
}

