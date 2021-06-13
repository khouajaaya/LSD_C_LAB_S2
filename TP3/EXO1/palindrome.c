#include<stdlib.h>
#include<stdio.h>
#include"liste_simple.h"

void palyndrom(liste L)
{	l=[]
	liste temp=L;
	while(temp->suivant!=NULL):
	{	
		l+=[temp->element];
		temp=temp->suivant;
        }	                    
	l+=[temp->element];
	a=sizeof(l)/sizeof(l[0];
	int i=0;
	while(i<=a/2)
	{
		if(l[i]=l[a-i-1])
		{	
			i+=1;
		}
	}
	printf("it's  palyndrom")
}
