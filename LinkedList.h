#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct song_node *song;
struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node *start);
struct song_node *insert_front(struct song_node *list, char name[], char artist[]);
struct song_node *free_list(struct song_node *start);
void add_node(struct song_node *start, struct song_node *new);
struct song_node *get_node(struct song_node *start, char name[], char artist[]);
struct song_node *get_randnode(struct song_node *start);
void remove_node(struct song_node *start, char name[], char artist[]);