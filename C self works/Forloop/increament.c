#include <stdio.h>

int main(){

    int i;
    scanf("%d",&i);
    printf("%d %d %d\n",++i,i,i++);
    printf("%d ",++i);
    printf("%d ",i);
    printf("%d ",i++);
return 0;
}