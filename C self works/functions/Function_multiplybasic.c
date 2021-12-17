#include <stdio.h>
    
    int mul(int x, int y)
{
    int result;
    result = x*y;
    return result;
}

int main()

{
    unsigned long long int prod,c;
    long double prod2,c2;
    prod = 1010101*437843547;
    prod2 = 1010101.95*437843547.0888;
    c =55555555*5;
    printf("%d\n", mul(4,5));
    printf("%d\n", mul(5,5));
    printf("%d\n", mul(7,5));
    printf("%d\n", mul(1010101,437843547)); //442,266,204,668,247
    printf("%ld\n", mul(1010101,437843547)); //442,266,204,668,247
    printf("%ld\n",1010101*437843547); //442,266,204,668,247
    printf("%llu %llu %d\n",prod, c, c); //442,266,204,668,247
    printf("\n%Lf\n",prod2); //442,266,204,668,247
printf("%e", prod2);
return 0;
}