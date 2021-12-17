#include <stdio.h>

int main(){
    
    printf("\n\n**Name1 array is already specified using '{}'** :::::::: \n");
    
        char name1[20]={'c','o','m','p','u','t','e','r'};                   //specifying an array of char type

            printf("> printing name1 array using ""%%s"" : %s \n",name1);

            printf(" \t\t\t\t\t\t>Initial address(name1[0]) of (name1) array using '%%d' ::: %d\n\n> Ascii table of the array(name1) elements :\n",name1);

            printf("%d  = %c \n",name1[0],name1[0]);
            printf("%d = %c \n",name1[1],name1[1]);
            printf("%d = %c \n",name1[2],name1[2]);
            printf("%d = %c \n",name1[3],name1[3]);
            printf("%d = %c \n",name1[4],name1[4]);
            printf("%d = %c \n",name1[5],name1[5]);
            printf("%d = %c \n",name1[6],name1[6]);
            printf("%d = %c \n",name1[7],name1[7]);

            printf("\n> printing elements address of the array (name1)\n%d\n",&name1[0]);
            printf("%d\n",&name1[1]);
            printf("%d\n",&name1[2]);
            printf("%d\n",&name1[3]);
            printf("%d\n",&name1[4]);
            printf("%d\n",&name1[5]);
            printf("%d\n",&name1[6]);
            printf("%d\n",&name1[7]);


printf ("\n\n**New array named 'type' is internally specified here** :::");
    char type[20]={'l','e', 'n', 'e', 'v', 'o',' ','f','l','e','x','5',' ','0'};
            printf("\nprinting the array (type) :%s\n",type);
            printf("\t\t\t\t\t\t Initial address: %d\n",type);

            //**************scanned arrays**********

printf("\n\n> User info\nscan the array (user) here : ");
    char user[30];
        scanf("%s",&user);
            printf("> Printing the array (user) here: %s\n",user);

    
printf("\n\n>Scaning the array (surname) here \\/\n\n");
    char surname_1[30];
        printf(">Scaning the array (surname) single char here using ""%%c"" :");
        scanf("%c",&surname_1[0]);
        printf("\n>Printing the array (surname) single char here: %c\n",surname_1);
        printf(">Printing the array (surname) single char here using ""%%s"" without scaning : %s",surname_1);
        printf("\t\t\t\t\t\t Initial address:%d\n",surname_1);
    

printf("\n\n>Scaning the array (name2) here \\/\n");
    char name2[30];
        scanf(" %c\n",&name2[0]);
            printf("%c\n",name2[0],name2[1]);
            printf("%d\n",&name2);
            printf("%d\n",&name2[0]);
            printf("%s\n",name2);

char name3[20]; //░
    scanf("%s",name3);
        printf("%s\n",name3);

char surname[30];
    scanf(" %[^\n]%*c",surname);
        printf("%s\n",surname);

char add_1[30];
    
    int j=0;
        for ( j = 0; j < 30; j++){
            scanf("%c",&add_1[j]);
        // if (*&add_1[j]='\0')
        // {
        //     break;
                                }
        
        for ( j = 0; j < 30; j++){
            printf("%c",add_1[j]);}

    
    char add[50];
    
        int k=0,count=0;

            for ( k = 0 ; k < 50; k++){
                scanf("%c",&add[k]);
                count++;             }
                    
                    printf("\t\t\t\tc= %d\n",count);

            for ( k = 0; k < count; k++){
                printf("%c",add[k]);    }
        
return 0;
}