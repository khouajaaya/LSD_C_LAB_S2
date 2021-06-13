#include<stdlib.h>
#include<stdio.h>

struct node
{
	int key;
	struct node * left;
	struct node * right;

{
	if( T==NULL)


};
typedef struct node node;
typedef node * Tree;


int tree_depth(Tree T)
{
	if( T==NULL)
		exit(EXIT_FAILURE);
	else
		return T->key;
		


}

int maximum(int x,int y)
{
	if(x>y)
		return x;
	return y;



}
unsigned hauteur( Tree T )
{
	if( T==NULL)
		return -1
	return 1+maximum(hauteur(gauche(T)),hauteur(droit(T))
}



unsigned tree_diameter(Tree T)

{
	if( T==NULL )
		return -1;
	return 1 + maximum(hauteur(gauche(T)))+maximum(hauteur(droit(T)));

}



unsigned leaf_sum(Tree T)
{
	if(T->left == NULL && T->right==NULL)
		return T->key;
	return leaf_sum(T->right)+leaf_sum(T->left);

	
}



/////Exo2///

tree do_tree(int x,tree T_1,tree T_2)
{
    tree T=(tree)malloc(sizeof(node));
    T->key=x;
    T->left=T_1;
    T->right=T_2;
    return T;
}



void insertAbrIter(int val,arbre T)
{
	if(*T==NULL)
    	{
        	*T=do_tree(val,NULL,NULL);
    	}	
    	tree temp=*T;
    	tree temp1=*T;
    	while(temp!=NULL)
    	{
        	temp1=temp;
        	if(val==temp->key)
            		return;
        	if(val<temp->key)
            		temp=temp->left;
        	else
            		temp=temp->right;
    	}
    	if(val==temp1->key)
        	return;
    	if(val<temp1->key)
        	temp1->left=do_tree(val,NULL,NULL);
    	else
        	temp1->right=do_tree(val,NULL,NULL);
        return;
}		


void researchabr(int x,tree T)
{
	if(T->key==x)
		return TRUE;
	
	if(T->right->key==x)
		return TRUE;
	return researchabr(int x,right(T))
	
	if(T->left->key==x



}































int main()
{





}


