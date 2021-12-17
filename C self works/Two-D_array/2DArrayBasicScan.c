#include <stdio.h>
#include <conio.h>

int main(){

    int arr2D[3][3];

        int i,j;
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {   
            printf("[%d] [%d] ::",i,j);
            scanf("%d",&arr2D[i][j]);}              //&arr2D[i][j] is the memory addresss of the array
        }                  
    
    for (i = 0; i < 3; i++){

        for ( j = 0; j < 3; j++)
            {printf("%d\t",arr2D[i][j]);                /* 00 01 02
                                                           10 11 12
                                                           20 22 22 */

        if (j==2)
            {printf("\n");}}
    }

return 0;
}