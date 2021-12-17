#include <stdio.h>

int main(){

    int no,flag;
    scanf("%d",&no);

    int i=2;
    while (i < no)
    {
        if (no%i == 0)
        {
            flag=1;
        }
        i++;
    }

if ( flag == 1 )
            {printf("composite");}
            else    
            {printf("prime");}
            
return 0;
}