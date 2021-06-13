#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;
};
typedef struct node node;
typedef node* t_list;

t_list create_node(int);         //Creating a node
void add_node(t_list,int value); //Adding a node to an existing one
t_list array_to_list(int* ,int); //Creating a list based on the array values
void print_list(t_list);         //Printing the list values
void remove_node(t_list*,int);  //Removing a node from the overall list
void free_node(t_list);          //Freeing the allocated nodes in the overall list
t_list create_list(int n);       //(Not required from the exercice) Creating an overall list 

#endif
