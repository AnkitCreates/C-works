#include <stdio.h>
#include <conio.h>

void display2()
{
    printf("This is display 2");
}

void display()              //Function prototype
{
    printf("This is calling of display function\n"); //Function task
    //display(display2);
    display2();             //calling of of other function i.e. display2()
}

int main(){
display();              //Function call

return 0;
}