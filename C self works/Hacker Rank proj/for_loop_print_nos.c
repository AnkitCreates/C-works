#include <stdio.h>

int main(){

    char *numbers[]={"one","two","three","four","five","six","seven","eight","nine"};
int n,N;

scanf ("%d", &n);

    if (n>=1 && n<=9)
    {
        printf("%s", numbers[n-1]);
    }

    else if (n>9)
    {
      //  N == n%2;

            if (n%2 == 0)
            {
                printf("even");
            }else
            {
                printf("odd");
            }
    }

return 0;
}