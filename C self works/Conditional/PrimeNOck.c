#include <stdio.h>
#include <conio.h>

int main(){
    int n,no;
    scanf("%d",&n);

int i=2;
while (i<n)
{
    n%i==no;
    ++i;
}
printf("%d",no);

if (n%i != 0)
{
    printf("composite");
}else
{
    printf("prime");
}
    return 0;
}