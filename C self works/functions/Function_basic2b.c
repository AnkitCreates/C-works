#include <stdio.h>
#include <conio.h>

void disp()
{
    printf("This is display 2");
    display();
}

void display()              //Function prototype
{
    printf("This is calling of display function\n"); //Function task
    //display(display2);
    disp();             //calling of of other function i.e. display2()
}

//main function
int main(){
display();              //Function call

return 0;
}