#include <stdio.h>

int main(){
int i=2;
    char user[30];      
        printf("user info::\nFirst name:");
            scanf(" %s",user);
                printf("F: %s\n",user);

    char midName[2];
        printf("midname:");
            scanf(" %c"
            ,&midName[0]);
            printf("m:%c\n",midName[0]);
    
    char surname[30];
        printf("surname:");
            scanf(" %[^\n]%*c", &surname);
                printf("l: %s",surname);

return 0;
}


// char sen[50];
//     scanf(" %[^\n]%*c", &sen);
//     printf ("sen 1: %s\n", sen);

                                                        // printf("%s\n",midName);
                                                                    // printf("%d\n",midName);
                                                                    // printf("%d\n",&midName);
                                                                    
                                                        // int t4=6422256;
                                                        //     printf("6422256 = %c",t4);
                                                        //     // char test='Σ',test2='π',t3='Γ';
                                                        //     // printf("\n\n\n%d %d %d",test,test2,t3);