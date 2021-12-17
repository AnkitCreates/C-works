#include <stdio.h>
#include <conio.h>

int main()
{

    int marks1[5]; // specifying the type and size of the array

    printf("\n\nPrinting array's addresses of marks1 array using '&'\n");

    printf("%d\n", &marks1[0]);
    printf("%d\n", &marks1[1]);
    printf("%d\n", &marks1[2]);
    printf("%d\n", &marks1[3]);
    printf("%d\n", &marks1[4]);

int marks[5] = {98, 45, 57, 98, 78}; // specifying the type and size of the array
                                         // and initializing the values of the array.
    printf("\nPrinting marks' array value\n");
    printf("%d\n", marks[0]);
    printf("%d\n", marks[2]);
    printf("%d\n", marks[3]);
    printf("%d\n", marks[1]);

    printf("%d\n", marks[4]);

int prices[10]; /*specifying the type and size of the array 
                            and initializing the values of the array.*/
    printf("\nPrinting prices' array value:");

    prices[0] = 2;
    prices[1] = 50;
    prices[2] = 100;
    prices[3] = 9;
    prices[4] = 50;
    prices[5] = 49;
    prices[6] = 30;
    prices[7] = 40;
    prices[8] = 5;
    prices[9] = 4;

    printf("\n%d %d %d %d %d %d %d %d %d %d\n", prices[0], prices[1], prices[2], prices[3], prices[4],
           prices[5], prices[6], prices[7], prices[8], prices[9]); //printing values of array one-by-one

    printf("\nPrinting prices' array value using for loop:\n");

int i = 0;
    for (i = 0; i <= 9; i++)

    {
        printf("%d ", prices[i]);
    }

    int size;
    int newarrayRoll[size];
    printf("\n\nEnter the size for the new array Roll\n");
    scanf("%d\n", &size);

    int j = 0;
    for (j = 0; j < size; j++)

    {
        scanf("\n%d", &newarrayRoll[j]);
    }
    for (j = 0; j < size; j++)

    {
        printf("%d ", newarrayRoll[j]);
    }

    return 0;
}