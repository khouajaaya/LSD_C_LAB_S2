

#include<string.h>
///Evaluate RPN equation////
	
void push(t_stack ** head,int data)
{
	t_stack *p=(t_stack*)malloc(sizeof(t_stack));
	p->data=data;
	p->next=*head;
	*head=p;
}

int stack_len(t_stack * head)
{
	int p;
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


int evaluate_RPN(char *tab)
{	int c;
	t_stack *p;
	for(int i=0;i<=strlen(tab);i++)
	{
		if(isdigit(tab[i]))
		{
			char c = tab[i];
			atoi(&c);
			push(&p,tab[i]);
		}
		else
			if(stack_len(p)>=2){
				int a =pop(&p);
				int b = pop(&p);
				if (tab[i]='*'){
					c=b*a;
					push(&p,c);
				}
				if( tab[i]='+'){
					c=b+a;
					push(&p,c);
				}
				if(tab[i]='-'){
					c=b-a;
					push(&p,c);
				}
				if(tab[i]='/'){
					c=b/a;
					push(&p,c);
				}
				else
					printf("%s","ERROR");
					exit(EXIT_FAILURE);
			}
			else
				printf("%s","ERROR");
				exit(EXIT_FAILURE);
	}	
	return c;
		
}


