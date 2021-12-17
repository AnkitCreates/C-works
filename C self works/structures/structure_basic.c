#include <stdio.h>

    struct rectangle{
        int len;
        int bre;
    }rectangle1,rectangle2;


int main(){
//struct rectangle r;
struct rectangle r={10,5};
r.len=20;
r.bre=10;
printf("area= %d",r.len*r.bre);

return 0;
}