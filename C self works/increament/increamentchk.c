#include <stdio.h>
#include <conio.h>

int main(){
    int a = 3;
    printf("%d\t", a++); //a++ Returns a then increments a by 1. (a = a + 1)
    printf("%d\t",a);
    printf("%d\n", ++a); //++a Increment a by 1. (a = a + 1)
    printf("%d",a);
    return 0;
}