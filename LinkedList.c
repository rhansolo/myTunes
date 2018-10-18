
#include "LinkedList.h"

void print_list(struct song_node *start){
	printf("[");
	while (start){
		printf("%s|%s",start -> artist, start -> name);
		if (start -> next){
			printf(",");
		}
		start = start -> next;
	}
	printf("]\n");
}
void print_node(song s){
	if (s == NULL){
		printf("Song not Found");
		return;
	}
	printf("%s:%s",s->artist, s->name);
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
		printf("Freeing Node: %s - %s\n",current->artist,current->name);
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
int get_length(struct song_node *start){
	int len = 0;
	while (start != NULL){
		len += 1;
		start = start -> next;
	}
	return len;
}
struct song_node *get_randnode(struct song_node *start){
	struct song_node *temp = start;
	srand(time(NULL));
	int index = rand() % get_length(temp);

	for (int i = 0; i < index ; i++){
		start = start -> next;
	}
	return start;
}
song remove_node(struct song_node *start, char name[], char artist[]){
	song temp = start;
	//printf("%s\n",name);
	if (strcmp(start->name,name) == 0 
			&& strcmp(start->artist,artist) == 0){
		return start -> next;
	}
	while (start -> next != NULL){
		// printf("%s\n",name);
		// printf("%s\n",start->next->name);
		printf("STRCMP: %d\n", strcmp(start->next->name,name));
		if (strcmp(start->next->name,name) == 0 
			&& strcmp(start->next->artist,artist) == 0){
			start -> next = start -> next -> next;
			return temp;
		}
		start = start -> next;
	}
	printf("%s\n","Song not Found");
	return temp;
}




