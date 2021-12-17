#include<stdio.h>
#include<conio.h>
int main(){
int i,rows,j,n;
printf("Enter the no of the rows : ");  
scanf("%d",&rows);
for (i = 0; i < rows; i++){
    
    for(j = rows; j > i;j--)
    {
        printf("%d",j);
    }
printf("\n");
}

return 0;
}