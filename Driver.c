#include <stdlib.h>
#include <stdio.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif
#include "SongLib.h"

int main(){
  // LINKED LIST TESTS 
  printf("LINKED LIST TESTS \n");
  printf("=============================\n\n");
  //Constructing nodes
  struct song_node *node1 = malloc(sizeof(struct song_node));
  strcpy(node1 -> name,"ThunderStruck");
  strcpy(node1 -> artist,"Ac/dc");
  node1 -> next = NULL;
  struct song_node *node2 = malloc(sizeof(struct song_node));
  strcpy(node2 -> name,"Canals");
  strcpy(node2 -> artist,"Joakim Karud");
  node2 -> next = NULL;
  struct song_node *node3 = malloc(sizeof(struct song_node));
  strcpy(node3 -> name,"I'm good at multi");
  strcpy(node3 -> artist,"Steven");
  node3 -> next = NULL;
  struct song_node *node4 = malloc(sizeof(struct song_node));
  strcpy(node4 -> name,"I <3 DW");
  strcpy(node4 -> artist,"Time");
  node4 -> next = NULL;
  struct song_node *node5 = malloc(sizeof(struct song_node));
  strcpy(node5 -> name,"I don't come to class");
  strcpy(node5 -> artist,"Peter");
  node5 -> next = NULL;
  struct song_node *node6 = malloc(sizeof(struct song_node));
  strcpy(node6 -> name,"I'm always right");
  strcpy(node6 -> artist,"Crystal");
  node6 -> next = NULL;
  //////////////////////////////////////////////////////////////////
  //Testing print_list
  printf("Testing print_list: \n");
  /////////////////////////////////////////////////////////////////////////////////////////
  // MUSIC LIBRARY TESTS 
  printf("MUSIC LIBRARY TESTS \n");
  printf("=============================\n\n");
  //Constructing songs
  struct song_node *song1 = malloc(sizeof(struct song_node));
  strcpy(song1 -> name,"ThunderStruck");
  strcpy(song1 -> artist,"Ac/dc");
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
  printf("Looking for [I'm always right: Crystal]\n");
  print_node(get_song(biblio,"I'm always right","Crystal"));
  printf("\nLooking for [This dong doesn't exist: DNE]\n");
  print_node(get_song(biblio,"This song doesn't exits", "DNE"));
  printf("\n==========================================\n");
  //////////////////////////////////////////////////////////
  //testing find artist
  printf("Testing find artist:\n");
  printf("Looking for [Crystal]\n");
  search_artist(biblio,"Crystal");
  printf("Looking for [Robin]\n");
  search_artist(biblio,"Robin");
  printf("==========================================\n");    
  //////////////////////////////////////////////////////////
  //testing remove song
  printf("Testing remove song:\n");
  printf("Library before removal: \n");
  print_library(biblio);
  printf("Removing [ThunderStruck: Ac/dc]\n");
  delete_song(biblio,"ThunderStruck","Ac/dc");
  printf("Library after removal: \n");
  print_library(biblio);
  printf("==========================================\n");  
  /////////////////////////////////////////////////////////
  //testing clear_library
  printf("Testing clear_library:\n");
  clear_lib(biblio);
  print_library(biblio);
  printf("==========================================\n");  
  ////////////////////////////////////////////////////////
  //add songs to empty library
  printf("Adding songs to empty library:\n");
  struct song_node *songA = malloc(sizeof(struct song_node));
  strcpy(songA -> name,"Stuyvesant Sucks");
  strcpy(songA -> artist,"Student Body");
  songA -> next = NULL;
  struct song_node *songB = malloc(sizeof(struct song_node));
  strcpy(songB -> name,"Worst Song");
  strcpy(songB -> artist,"Ben Dover");
  songB -> next = NULL;
  add_song(biblio,songA);
  add_song(biblio,songB);
  print_library(biblio);
  printf("==========================================\n");  
  ///////////////////////////////////////////////////////
  //Testing print_artist
  printf("Testing print_artist:\n");
  printf("printing [Ben Dover]\n");
  print_artist_song(biblio,"Ben Dover");
  printf("==========================================\n");  
  //////////////////////////////////////////////////////
  //Testing shuffle
  printf("Testing shuffle: \n");
  shuffle(biblio);
  //shuffle(biblio);
  printf("==========================================\n");  





  






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


