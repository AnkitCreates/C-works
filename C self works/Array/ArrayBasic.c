#include <stdio.h>
#include <conio.h>

int main(){

    int marks[5];  // specifying the (int)type and size(5) of the array

    printf("Printing garabage of array\n");
    
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    printf("%d\n",marks[3]);
    printf("%d\n",marks[4]);

    printf("\nPrinting array's addresses of array using '&' \n\n");   
    
    printf("%d\n",&marks[0]);
    printf("%d\n",&marks[1]);
    printf("%d\n",&marks[2]);
    printf("%d\n",&marks[3]);
    printf("%d\n",&marks[4]);

/*  scanf("%d",marks);
    
    printf("Printing array's entered value \n");
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    printf("%d\n",marks[3]);
    printf("%d\n",marks[4]);

*/
return 0;
}