#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, sum = 0;
    scanf("%d",&a);

    for (i = 1; i <= a; i++)
    {
        sum=sum+i;
    }
    printf("%d\n", sum);
    printf("%d",i);
    return 0;
}
