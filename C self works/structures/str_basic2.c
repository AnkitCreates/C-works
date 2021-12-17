#include <stdio.h>

    struct rectangle{
        int len;
        int bre;
    }r1,r2;

int main(){

r1.len=20;
r2.bre=10;

printf("area= %d",r1.len*r2.bre);

return 0;
}