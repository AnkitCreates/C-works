#include<stdio.h>
#include<conio.h>
int main(){
int i,r,k;
printf("Enter the no of the rows : ");  
scanf("%d",&r);
for (i = 0; i < r; i++){
    for(k = r; k > i; k--,r--)
    {
        printf("%d",r);printf("#");printf("%d",r-1);printf("$");printf("%d",r-2);
        printf("#");printf("%d",r-3);printf("#");printf("%d",r-4);
    }
    printf("\n");
}
printf("\n");

return 0;
}