#include <stdio.h>

int main()
{
    int x;
    float y;
    double z;
    char c;
    unsigned char u;
    signed s;
    short sh;
    short int us;
    signed short int ss;
    long int l;
    unsigned long int ul;
    signed long int sl;
    long double ld;
    
    printf ("size of  integer is              %d\n", sizeof(x));
    printf ("size of  float is                %d\n", sizeof (y));
    printf ("size of  double is               %d\n", sizeof (z));
    printf ("size of  char is                 %d\n", sizeof (c));
    printf ("size of  unsinged char is        %d\n", sizeof (u));
    printf ("size of  singed is               %d\n", sizeof (s));
    printf ("size of  short is                %d\n", sizeof (sh));
    printf ("size of  short int is            %d\n", sizeof (us));
    printf ("size of  singed short int is     %d\n", sizeof (ss));
    printf ("size of  long int is             %d\n", sizeof (l));
    printf ("size of  unsigned long int       %d\n", sizeof (ul));
    printf ("size of  singed long int is      %d\n", sizeof (sl));
    printf ("size of  long double is          %d\n", sizeof (ld));
    
    return 0;
}