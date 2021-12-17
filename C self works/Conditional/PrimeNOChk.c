#include <stdio.h>

int main(){

    int no,a,i=2;
    scanf("%d",&no);

    while (i<no)
    {i++;
        a = no%i;
        
    }
    printf("%d",a);
    if (a == 0)
            {
                printf("composite");
            }else
            {
                printf("odd");
            }

return 0;
}