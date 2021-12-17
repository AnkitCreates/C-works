#include <stdio.h>
#include <conio.h>

int main (){
int i,a, fact=1;

scanf ("%d",&a);
for (i=1;i<=a;i++)
{
    fact *=i;
}
printf("fact of %d is =%d",a,fact);
return 0;
}