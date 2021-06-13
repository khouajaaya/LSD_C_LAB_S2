#include"stack.h"

t_stack * new_stack(int data)
{
	t_stack *P= (t_stack*)malloc(sizeof(t_stack));
	P->data= data;
	p->next=NULL;
	return P;
}

int is_empty(t_stack *head)
{
	if(head=NULL)
		return 1;
	return 0;

}


void  push(t_stack **head, int data)
{
	t_stack *P=(t_stack*)malloc(sizeof(t_Stack));
	P->data=data;
	p->next=*head;
	*head=P;
}

int  pop(t_stack **head)
{
	if(is_empty(head)==0)
    	{
       		int res=(head)->element;
        	t_stack *  temp=head;
       		head=(head)->suivant;
        	free(temp);
        	return res;
    	}
    else
        exit(EXIT_FAILURE);


int stack_len(t_stack * head);
{
	p=0;
	t_stack *temp=head;
    	while(temp->next!=NULL)
    	{	
        	p+=1;
        	temp=temp->next;
    	}	
    	if(temp!=NULL)
        	p+=1;
	return p;

}

int peek_stack(t_stack * head)
{
	if(head==NULL)
		exit(EXIT_FAILURE);
	else
		return head->data;
		


}

void print_stack(t_stack * head)
{
 	t_stack *temp=head;
    	while(temp->next!=NULL)
    	{
        	printf("%d, ",temp->data);
        	temp=temp->next;
    	}	
    	if(temp!=NULL)
        	printf("%d\n",temp->data);


}

