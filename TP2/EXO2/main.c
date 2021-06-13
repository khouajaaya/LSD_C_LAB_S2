#include "header.h"

int main(){
    t_list c;
    t_list* k=&c;
    int n,T[n],m;
    printf("Enter the desired array length: ");
    scanf("%d",&n);
    if(n>0){
        printf("Please start typing the array values:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&T[i]);
        }
        c=array_to_list(T,n);
        print_list(c);
        printf("Remove a node by typing it int address: ");
        scanf("%d",&m);
        remove_node(k,m);
    }
    else{
        c=array_to_list(T,n);
    }
    print_list(c);
    free_node(c);
    return 0;
}
