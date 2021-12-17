#include <stdio.h>

int main(){

    char name[10]={'c','o','m','p','u','t','e','r'};        //specifying an array of char type
    
    printf("%s \n",name);

    printf(" \t\tInitial address: %d\nAscii table of the array elements :\n",name);
    printf("%d  = %c \n",name[0],name[0]);
    printf("%d = %c \n",name[1],name[1]);
    printf("%d = %c \n",name[2],name[2]);
    printf("%d = %c \n",name[3],name[3]);
    printf("%d = %c \n",name[4],name[4]);
    printf("%d = %c \n",name[5],name[5]);
    printf("%d = %c \n",name[6],name[6]);
    printf("%d = %c \n",name[7],name[7]);

    printf("\n printing elements address of the array\n%d\n",&name[0]);
    printf("%d\n",&name[1]);
    printf("%d\n",&name[2]);
    printf("%d\n",&name[3]);
    printf("%d\n",&name[4]);
    printf("%d\n",&name[5]);
    printf("%d\n",&name[6]);
    printf("%d\n",&name[7]);

    //printf("%c\n",name[1]);

    char type[20]={'l','e', 'n', 'e', 'v', 'o',' ','f','l','e','x','5',' ','0'};
    printf("\n%s\n",type);
    printf("\t\t Initial address: %d\n",type);

    printf("user info\n");
char user[30];
    scanf("%s",&user);
    printf("%s\n",user);

char surname[30];
    scanf("%c\n",&surname);
    printf("%c\n",surname);
    printf("%s\n",surname);
    printf("%d\n",surname);
    

    
return 0;
}