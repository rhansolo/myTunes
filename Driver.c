#include <stdlib.h>
#include <stdio.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif
#include "SongLib.h"

int main(){
  printf("MUSIC LIBRARY TESTS \n");
  printf("=============================\n\n");
  //Constructing songs
  struct song_node *song1 = malloc(sizeof(struct song_node));
  strcpy(song1 -> name,"ThunderStruck");
  strcpy(song1 -> artist,"ac/dc");
  song1 -> next = NULL;
  struct song_node *song2 = malloc(sizeof(struct song_node));
  strcpy(song2 -> name,"Canals");
  strcpy(song2 -> artist,"Joakim Karud");
  song2 -> next = NULL;
  struct song_node *song3 = malloc(sizeof(struct song_node));
  strcpy(song3 -> name,"I'm good at multi");
  strcpy(song3 -> artist,"Steven");
  song3 -> next = NULL;
  struct song_node *song4 = malloc(sizeof(struct song_node));
  strcpy(song4 -> name,"I <3 DW");
  strcpy(song4 -> artist,"Time");
  song4 -> next = NULL;
  struct song_node *song5 = malloc(sizeof(struct song_node));
  strcpy(song5 -> name,"I don't come to class");
  strcpy(song5 -> artist,"Peter");
  song5 -> next = NULL;
  struct song_node *song6 = malloc(sizeof(struct song_node));
  strcpy(song6 -> name,"I'm always right");
  strcpy(song6 -> artist,"Crystal");
  song6 -> next = NULL;
  ////////////////////////////////////////////////////////////
  //Storing songs
  Library biblio = calloc(sizeof(struct library),1);
  add_song(biblio,song1);
  add_song(biblio,song2);
  add_song(biblio,song3);
  add_song(biblio,song4);
  add_song(biblio,song5);
  add_song(biblio,song6);
  ////////////////////////////////////////////////////////////
  //print library
  printf("Testing print_library:\n");
  print_library(biblio);
  printf("=========================================\n");
  ///////////////////////////////////////////////////////////
  //print letter
  printf("Testing print_letter\n");
  print_letter(biblio,'c');
  printf("========================================\n");
  ///////////////////////////////////////////////////////////
  //test find
  printf("Testing find:\n");
  printf("looking for [I'm always right: Crystal]\n");
  print_node(get_song(biblio,"I'm always right","Crystal"));
  printf("looking for [This dong doesn't exist: DNE]\n");
  print_node(get_song(biblio,"This song doesn't exits", "DNE"));
  printf("==========================================\n");
  //////////////////////////////////////////////////////////
  






  /////////////////////////////////////////////////////////
  // add_node(list,g);
  // print_list(list);
  // add_node(list,h);
  // print_list(list);
  
  // remove_node(list,"Steven","Steven");
  // print_list(list);
  // remove_node(list,"Time","Time");
  // print_list(list);
  
  //////////////////////////////////////////////////////////////////////////////////////////
  
  
  // printf("%d\n",(char)((list->name)[0]) - 'A');
  // // song start = biblio->album[(char)((list->name)[0]) - 'A'];
  // printf("%d\n",(int)(start == NULL));
  
  // printf("%c\n",(list->name)[0]);
  // char a[50];
  // strcpy(a,"Hi");
  // printf("%c\n",a[0]);
  //printf("%s\n",biblio->album[1]->artist);
  //printf("%c\n",(char)(2+(int)'A'));
  
  //add_song(biblio,l);

  //print_entries(biblio,'B');

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


