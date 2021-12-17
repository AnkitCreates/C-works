#include <stdio.h>
#include <conio.h>

int main (){
int i,a, fact=1;

printf ("Enter a number to get its Factorial: ");
scanf ("%d",&a);
for (i=1;i<=a;i++)
{
    fact =fact*i;
    printf ("%d * ",i);
}
printf("\nFactorial of %d is = %d",a,fact);
return 0;
}