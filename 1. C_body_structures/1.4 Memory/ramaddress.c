#include <stdio.h>

int main(){

    int a,b,c;

    scanf ("%d %d",&a,&b);
    printf("%%d:: address %d %d\n",&a,&b);
    printf("%%p:: %p %p\n",a,b);
    printf("%%p:: %p %p\n",a,b);
    printf("%%x:: %x %x\n",a,b);
    printf("%%o:: %o %o\n",a,b);
    c=(&a-&b);
    printf("diff btw address of a and b b-a=%d",c);

return 0;
}