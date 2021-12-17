#include <stdio.h>
#include <conio.h>

int main (){
int i,a;
double fact=1;
scanf ("%d",&a);
for (i = 1; i <= a; i++)
{
    fact = fact*i;
}
printf("fact of %d is =%.2lf\n",a,fact);
printf("fact of %d is =%e ",a,fact);
return 0;
}