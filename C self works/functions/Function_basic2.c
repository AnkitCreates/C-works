#include <stdio.h>
#include <conio.h>

void display()              //Function prototype
{
    printf("This is calling of display function"); //Function task
    display();
}

int main(){
display ();              //Function call

return 0;
}