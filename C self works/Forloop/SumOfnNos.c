#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, sum = 0;
    printf("no:");
    scanf("%d",&a);

    for (i = 1; i <= a; ++i)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}