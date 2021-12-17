#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    *a = *a + *b,
    *b = (*a - *b)- *b;
    
    if (*b<0)           //for getting absolute value |a-b|
    {
        *b = *b * (-1);
    }    
}

int main(){
    int a2, b2;
    int *pa = &a2, *pb = &b2;
    
    scanf("%d %d", &a2, &b2);
    update(pa, pb);
    printf("%d\n%d", a2, b2);

    return 0;
}