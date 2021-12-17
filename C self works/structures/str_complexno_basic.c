#include <stdio.h>

struct str_complexno
    {
        int real;
        int img;
    }c1,c2;

int main(){
    int sum;

    c1.real=5;
    c1.img=10;

    c2.real=12;
    c2.img=15;

printf("sum = %d %di",c1.real+c2.real,c1.img+c2.img);

return 0;
}