#include <stdio.h>
#include <conio.h>

int main(){

int a;
    scanf("%d", &a);
    printf("%d %d %d %d %d\n\n",a++,++a,a--,--a,a);

int b;
    scanf("%d", &b);
    printf("%d %d\n",b++,b);

int c;
    scanf("%d", &c);
    printf("%d %d",++c,c);

return 0;
}