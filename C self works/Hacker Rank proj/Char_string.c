#include <stdio.h>

int main() {

char a;
    scanf("%c", &a);
    printf("singele char : %c\n",a);

char s[45];
    scanf("%s",s);
    printf("string :%s\n",s);

char sen[50];
    scanf(" %[^\n]%*c", &sen);
    printf ("sen 1: %s\n", sen);

char sen2[50];
    scanf(" %[^\n]%c", sen2);
    printf ("sen 2: %s", sen2);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}