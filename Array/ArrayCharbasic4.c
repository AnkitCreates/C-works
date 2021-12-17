#include <stdio.h>

int main(){

    char add[50];

    int i=0,count=0;

    for ( i = 0; i < 50; i++)
    {
        scanf("%c",&add[i]);
        count++;        
    }

        for ( i = 0; i < count; i++)
    {
        printf("%c",add[i]);
    }
    printf("\n\t\t\t\tc= %d\n",count);
    
return 0;
}

//    code is the secret of my energy (for pasting purpose)