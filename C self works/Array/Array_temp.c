#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    scanf ("%d",&n);
    char names[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf ("%c", &names[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf ("%c", &names[i]);
    }

return 0;
}