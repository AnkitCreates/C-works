#include <stdio.h>

int main(){

    char *numbers[]={"one","two","three","four","five","six","seven","eight","nine"};

int a,b;
scanf ("%d %d", &a, &b);

if (a>=1 && a<=9){

for (int i = a; i <= b; i++)
{
    
    {
        printf("%s ", numbers[i-1]);

    }
}
}else if (a>9)
    {
            if (a%2 == 0)
            {
                printf("even");
            }else
            {
                printf("odd");
            }
    }


return 0;
}