#include <stdio.h>
#include <conio.h>

int main (){
int i,a; 
long fact=1;

printf ("Enter a number to get its Factorial: ");
scanf ("%d",&a);
for (i=1; i<=a; i++)
{
    fact = fact*i;
    printf("%d",i);
        {
            if (i<a)
        printf(" X ");
            else if (i=a)
            {
               printf(" = %ld ",fact);
            }
        }
}
printf ("\nFactorial of %d is %ld",a,fact);
return 0;
}