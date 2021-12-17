#include <stdio.h>

int main() {
   int x;
   scanf("%d",&x);
   switch( x ){
      case 1 :
         printf( "jan\n");
         break;
      case 2 :
         printf("feb\n");
         break;
      case 3 :
         printf( "mar\n");
         break;
      case 4 :
         printf( "apr\n");
         break;
      case 5 :
         printf( "may\n");
         break;
      case 6 :
         printf( "june\n");
         break;
      case 7 :
         printf( "july\n");
         break;
      case 8 :
         printf( "Aug\n");
         break;
      case 9 :
         printf( "Sep\n");
         break;
      case 10 :
         printf( "Oct");
         break;
      case 11 :
         printf( "Nov\n");
         break;
      case 12 :
         printf( "Dec\n");
         break;
    default :
         printf( "Enter a valid month ");
   }
}