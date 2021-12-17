#include <stdio.h>
#include <conio.h>

int main (){
int i,a, fact=1;

printf ("Enter a number to get its Factorial: \n");
scanf ("%d",&a);
for (i=1;i<=a;)
{
    fact =fact*i;
    i++;
}
printf("Factorial of %d is =%d",a,fact);
return 0;
}