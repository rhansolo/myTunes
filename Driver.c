#include <stdlib.h>
#include <stdio.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif
#include "SongLib.h"

int main(){
	struct song_node *list = malloc(sizeof(struct song_node));
	strcpy(list -> name,"Bob");
	strcpy(list -> artist,"Bob");
	list -> next = NULL;
	struct song_node *l = malloc(sizeof(struct song_node));
	strcpy(l -> name,"Robin");
	strcpy(l -> artist,"Robin");
	l -> next = NULL;

	//add_node(list,l);
	//print_list(list);

	struct song_node *g = malloc(sizeof(struct song_node));
	strcpy(g -> name,"Steven");
	strcpy(g -> artist,"Steven");
	g -> next = NULL;
	struct song_node *h = malloc(sizeof(struct song_node));
	strcpy(h -> name,"Time");
	strcpy(h -> artist,"Time");
	h -> next = NULL;

	// add_node(list,g);
	// print_list(list);
	// add_node(list,h);
	// print_list(list);

	// remove_node(list,"Steven","Steven");
	// print_list(list);
	// remove_node(list,"Time","Time");
	// print_list(list);

	//////////////////////////////////////////////////////////////////////////////////////////

	Library biblio = calloc(sizeof(struct library),1);
	// printf("%d\n",(char)((list->name)[0]) - 'A');
	// // song start = biblio->album[(char)((list->name)[0]) - 'A'];
	// printf("%d\n",(int)(start == NULL));

	// printf("%c\n",(list->name)[0]);
	// char a[50];
	// strcpy(a,"Hi");
	// printf("%c\n",a[0]);
	add_song(biblio,list);
	//printf("%s\n",biblio->album[1]->artist);
	add_song(biblio,l);
	//printf("%c\n",(char)(2+(int)'A'));

	//add_song(biblio,l);
	add_song(biblio,g);
	add_song(biblio,h);

	//print_entries(biblio,'B');
	printf("\n");
	print_library(biblio);
	printf("\n");
	// song start = (biblio -> album)[2];
	// if (start == NULL){
	// 	printf("run");
	// }
	//print_entries(biblio,'B');
	// printf("%d\n",biblio -> album[0] == NULL);
	// print_entries(biblio,'C');
    // print_library(biblio);
	// add_song(biblio,g);
	// print_library(biblio);
	// add_song(biblio,h);
	// print_library(biblio);








	// list = free_list(list);
	// printf("list is now %s\n",(char*)list);
	return 0;
}


