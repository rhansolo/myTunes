
#include "LinkedList.h"

void print_list(struct song_node *start){
	printf("[");
	while (start){
		printf("%s",start -> artist);
		if (start -> next){
			printf(",");
		}
		start = start -> next;
	}
	printf("]\n");
}

struct song_node *insert_front(struct song_node *list, char name[], char artist[]){
	struct song_node *new = malloc(sizeof(struct song_node));
	strcpy(new -> name,name);
	strcpy(new -> artist,artist);
	return new;
}

struct song_node *free_list(struct song_node *start){
	struct song_node *current = start;
	while (current){
		struct song_node *temp = current -> next;
		free(current);
		current = temp;
	}
	return NULL;
}
int song_cmp(struct song_node *a, struct song_node *b){
	int s = strcmp(a->name, b->name);
	int ar = strcmp(a->artist, b->artist);
	if (ar != 0){
		return (int)(ar < 0);
	}
	return (int)(s < 0);
}
void add_node(struct song_node *start, struct song_node *new){
	while (start != NULL){
		if (song_cmp(start,new)){
			new -> next = start -> next;
			start->next = new;
			return;
		}
		if (start -> next == NULL){
			start -> next = new;
			return;
		}
		start = start -> next;
	}
}
struct song_node *get_node(struct song_node *start, char name[], char artist[]){
	while (start != NULL){
		if (strcmp(start->name,name) == 0 
			&& strcmp(start->artist,artist) == 0){
			return start;
		}
		start = start -> next;
	}
	return NULL;
}
struct song_node *get_randnode(struct song_node *start){
	return NULL;
}
void remove_node(struct song_node *start, char name[], char artist[]){
	while (start -> next != NULL){
		if (strcmp(start->next->name,name) == 0 
			&& strcmp(start->next->artist,artist) == 0){

			start -> next = start -> next -> next;
			return;
		}
		start = start -> next;
	}
}




