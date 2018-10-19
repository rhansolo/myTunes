#include <stdlib.h>
#include <stdio.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif
#include "SongLib.h"

int main(){
  // LINKED LIST TESTS 
  srand(time(NULL));
  printf("\nLINKED LIST TESTS \n");
  printf("***************************************************************************\n");
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
  strcpy(node3 -> name,"Introvert");
  strcpy(node3 -> artist,"Rich Brian");
  node3 -> next = NULL;
  struct song_node *node4 = malloc(sizeof(struct song_node));
  strcpy(node4 -> name,"I <3 DW");
  strcpy(node4 -> artist,"Time");
  node4 -> next = NULL;
  struct song_node *node5 = malloc(sizeof(struct song_node));
  strcpy(node5 -> name,"Cold");
  strcpy(node5 -> artist,"Peter Meuser");
  node5 -> next = NULL;
  struct song_node *node6 = malloc(sizeof(struct song_node));
  strcpy(node6 -> name,"We Got History");
  strcpy(node6 -> artist,"Crystal");
  node6 -> next = NULL;
  struct song_node *node7 = malloc(sizeof(struct song_node));
  strcpy(node7 -> name,"Extrovert");
  strcpy(node7 -> artist,"Rich Brian");
  node7 -> next = NULL;
  //////////////////////////////////////////////////////////////////
  //Storing nodes
  add_node(node1,node2);
  add_node(node2,node3);
  add_node(node3,node4);
  add_node(node5,node6);
  add_node(node6,node7);
  //////////////////////////////////////////////////////////////////
  //Testing print_list
  printf("Testing print_list: \n");
  print_list(node1);
  print_list(node5);
  printf("=========================================\n");
  /////////////////////////////////////////////////////////////////
  //Testing print_node
  printf("Testing print_node: \n");
  print_node(node1);
  print_node(node3);
  print_node(node5);
  printf("=========================================\n");
  ///////////////////////////////////////////////////////////////
  //Testing find_artist
  printf("Testing find artist:\n");
  printf("Looking for [Joakim Karud] (Expected Success)");
  printf("\n");
  print_node(get_artist_node(node1,"Joakim Karud"));
  printf("Looking for [Joakim Karud] (Expected Failure)");
  printf("\n");
  print_node(get_artist_node(node5,"Joakim Karud"));
  printf("=========================================\n");
  ///////////////////////////////////////////////////////////////
  //Testing find_node
  printf("Testing find_node:\n");
  printf("Looking for [Introvert, Rich Brian]\n");
  print_node(get_node(node1,"Introvert","Rich Brian"));
  printf("Looking for [I'm terrible at multi, Rich Brian]\n");
  print_node(get_node(node2,"I'm terrible at multi","Rich Brian"));
  printf("=========================================\n");
  ///////////////////////////////////////////////////////////////
  //Testing songcmp (helper function)
  printf("Testing songcmp (helperfunction):\n");
  printf("(1 represents Greater, 0 means Lower or equal)\n");
  printf("%s\n","Comparing Rich Bria with Rich Brian:");
  printf("%d\n",song_cmp(node3,node7));
  printf("%s\n","Comparing Peter Meuser with Rich Brian:");
  printf("%d\n",song_cmp(node5,node7));
  printf("=========================================\n");
  ////////////////////////////////////////////////////////////////
  //Testing random
  printf("Testing random:\n");
  print_node(get_randnode(node1));
  print_node(get_randnode(node1));
  print_node(get_randnode(node1));
  print_node(get_randnode(node1));
  print_node(get_randnode(node1));
  printf("=========================================\n");
  ///////////////////////////////////////////////////////////////
  //Testing free_list
  printf("Testing free_list:\n");
  node1 = free_list(node1);
  node5 = free_list(node5);
  printf("List after free_list:\n");
  print_list(node1);
  print_list(node5);
  printf("=========================================\n\n");


  /////////////////////////////////////////////////////////////////////////////////////////
  // MUSIC LIBRARY TESTS 
  printf("MUSIC LIBRARY TESTS \n");
  printf("***************************************************************************\n");
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
  strcpy(song3 -> name,"Introvert");
  strcpy(song3 -> artist,"Rich Brian");
  song3 -> next = NULL;
  struct song_node *song4 = malloc(sizeof(struct song_node));
  strcpy(song4 -> name,"I <3 DW");
  strcpy(song4 -> artist,"Time");
  song4 -> next = NULL;
  struct song_node *song5 = malloc(sizeof(struct song_node));
  strcpy(song5 -> name,"Cold");
  strcpy(song5 -> artist,"Peter Meuser");
  song5 -> next = NULL;
  struct song_node *song6 = malloc(sizeof(struct song_node));
  strcpy(song6 -> name,"We Got History");
  strcpy(song6 -> artist,"Crystal");
  song6 -> next = NULL;
  struct song_node *song7 = malloc(sizeof(struct song_node));
  strcpy(song7 -> name,"Zzz");
  strcpy(song7 -> artist,"Crystal");
  song6 -> next = NULL;
  struct song_node *song8 = malloc(sizeof(struct song_node));
  strcpy(song8 -> name,"Lightning");
  strcpy(song8 -> artist,"Ac/dc");
  song8 -> next = NULL;
  ////////////////////////////////////////////////////////////
  //Storing songs
  Library biblio = calloc(sizeof(struct library),1);
  add_song(biblio,song1);
  add_song(biblio,song2);
  add_song(biblio,song3);
  add_song(biblio,song4);
  add_song(biblio,song5);
  add_song(biblio,song6);
  add_song(biblio,song7);
  add_song(biblio,song8);
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
  printf("Looking for [We Got History: Crystal]\n");
  print_node(get_song(biblio,"We Got History","Crystal"));
  printf("Looking for [This dong doesn't exist: DNE]\n");
  print_node(get_song(biblio,"This song doesn't exits", "DNE"));
  printf("==========================================\n");
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
  printf("\nRemoving [ThunderStruck: Ac/dc]\n\n");
  delete_song(biblio,"ThunderStruck","Ac/dc");
  printf("Library after removal: \n");
  print_library(biblio);
  printf("==========================================\n");
  //////////////////////////////////////////////////////
  //Testing shuffle
  printf("Testing shuffle: \n");
  shuffle(biblio);
  //shuffle(biblio);
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


  return 0;
}


