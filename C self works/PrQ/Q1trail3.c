#include<stdio.h>
#include<conio.h>
int main(){
int i,rows,k;
printf("Enter the no of the rows : ");  
scanf("%d",&rows);
for (i = 0; i < rows; i++){
    for(k = rows; k > i; k--,rows--)
    {
        printf("%d",k);printf("#");printf("%d",k-1);printf("$");printf("%d",k-2);
        printf("#");printf("%d",k-3);printf("$");printf("%d",k-4);
        printf("\n");
    }
printf("\n");
}

return 0;
}