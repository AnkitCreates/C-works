#include <stdio.h>

int main(){

    short int a,b;  // range at least 16-bits [-32768, 32767]✅ [0, 65535]; 4 byte =32 bits 2 byte = 16 A 16-bit integer can store 216 (or 65,536); 2^16=65536
    scanf("%hi %hi",&a,&b);
    
    printf("a=%hi b=%hi \n\n",a,b);
    do
    {
        printf("%hi\t",a);  //hi =singed intger; hu=unsigned =+ve
        a++;
    } while (a<=b);
    
return 0;
}