#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
//datatype //function_name //arguments
int max_of_four(int a,int b, int c, int d){
    
    if (a>b && a>c && a>d)
    {
        return a;
    }else

    {
        if (b>c && b>d)
        {
            return b;
        }else

        {
            if (c>b && c>d)
            { 
                return c;
            }else
            {
                return d;
            }
        }
    }
}
;

int main()

{
    int a2, b2,c2, d2;
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
    int ans = max_of_four(a2, b2, c2, d2);
    printf("%d", ans);
    
    return 0;
}