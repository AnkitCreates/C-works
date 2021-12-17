#include <stdio.h>
#include <conio.h>

int main()
{    
    char names[10];
   
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&names[i]);
    }
        printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c",names[i]);
    }

return 0;
}