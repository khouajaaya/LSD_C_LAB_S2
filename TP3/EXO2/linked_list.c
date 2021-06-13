#include<stdlib.h>
#include<stdio.h>
#include"liste_simple.h"

void link_list(char *v)
{
	printf("%s", v);
	liste L3=NULL;
	//int j=0;
//	while(av[0][j]!='\0')
//	{
//		ajoutFin(av[0][j], &L3);
//		j=j+1;
//	}
//	return L3;
	int i=0;
	cellule *C=(cellule *)malloc(sizeof(cellule));
	C->suivant = NULL;
	liste temp=c;
	while(v[i]!='\0')
	{
		temp->element=v[i];
		temp->suivant=(cellule *)malloc(sizeof(cellule));
		temp=temp->suivant;
		temp->suivant=NULL;
		i=i+1;
	}
	

}
