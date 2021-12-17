#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a,count=0;     //specifying i,a &count var as int data  type
    scanf("%d",&a);     //scanning 'a' as int

    for (i=0;i<=a;i++)   //looping from i = 0 to i = a and increamenting each time
    {
        printf("%c %d = %c\n",4, i, i);   //printing i = i :: i.e. for each %d = %c; %c of 4 is 🔸
        count++;
    }
    printf("**loop has run for %d times**",count);
    return 0;
}