#include <stdio.h>
#include <conio.h>

int main (){
    int r;  //int = data type,r = variable (alphabet or digits or underscore,can't start with digit)

printf("Enter the no of the rows : ");  //printf= tokens ,reserved words
scanf("%d",&r);

int i;
for ( i = 0; i < r; i++)        //Lopping the code
{
    printf("*");                //printing a star.
    printf("\n");               //then printing a line. 
}
printf("\n");


for ( i = 0; i < r; i++)
{
    printf("*");
}
printf("\n\n\n");

int j;
for ( i = 0; i < r; i++)
{
    for(j = 0; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
}
printf("\n\n");


int k;
for (i = 0; i < r; i++){
    for(k = r; k > i; k--)
    {
        printf("*");
    }
    printf("\n");
}
printf("\n");

return 0;
}