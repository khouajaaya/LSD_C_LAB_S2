#include<stdio.h>
#include<stdlib.h>


typedef struct s_point
{
	int a;
	int b;
} t_point;
	

t_point *allocateStruct()
{
	t_point *p = (t_point *)malloc(sizeof(t_point));
	scanf("%d%d",&p->a,&p->b);
	return p;

}
char**  allocation(t_point dim)
{ 
	char **p;
	p=(int**)malloc(sizeof(char*)*dim.a);
	for(int i =0;i<=dim.a;i++)
		p[i]=(int*)malloc(sizeof(char)*dim.b);
	for (int i=0;i<=dim.a;i++)
		for(int j=0;j<=dim.b;j++){
			scanf("%c",&(p[i][j]));}

	return p

}

t_point  get_position(t_point pst)
{
	printf("entrer une position pour lançer le floodfile:");
	scanf("%d",&x,&y);
	pst.a=x;
	pst.b=y;
	return pst;
}


void floodfile(char ** Tab;t_point pst,t_point dim).
{
	 char c =Tab[pst.a][pst.b];
	 Tab[pst.a][pst.b]=F;
	 
	 if(Tab[pst.x][pst.y+1]==c && y+1<b);
		P.x=pst.x;
		p.y=pst.y;

