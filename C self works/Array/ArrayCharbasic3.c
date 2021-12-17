#include <stdio.h>
#include <conio.h>

int main(){

char name[20];
    scanf("%s",name);
    printf("%s\n",name);

char surname[30];
    scanf(" %[^\n]%*c",surname);
    printf("%s\n",surname);

char add[30];
    
    int i=0;
    for ( i = 0; i < 30; i++)
    {
        scanf("%c",&add[i]);
        // if (*&add[i]='\0')
        // {
        //     break;
        // 
    }
        
    for ( i = 0; i < 30; i++)
    {
        printf("%c",add[i]);
    }
    
return 0;
}