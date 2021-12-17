#include <stdio.h>

int main(){

    short int a,b;  // range at least 16-bits [-32768, 32767] [0,65535]✅
    scanf("%hu %hu",&a,&b);
    
    printf("a=%hu b=%hu\n",a,b);
    do
    {
        printf("%hu ",a); // hi =singed intger; hu=unsigned =+ve
        a++;
    } while (a<b);
    
return 0;
}