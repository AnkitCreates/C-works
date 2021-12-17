#include<stdio.h>
#include<conio.h>
int main(){
int i,rows,k;
printf("Enter the no of the rows : ");  
scanf("%d",&rows);
for (i = 0; i < rows; i++){
    for(k = rows; k > i; k--)
    {
        printf("%d",rows);printf("#");printf("%d",rows-1);printf("$");printf("%d",rows-2);
        printf("#");printf("%d",rows-3);printf("#");printf("%d",rows-4);
    }
    printf("\n");
}

return 0;
}