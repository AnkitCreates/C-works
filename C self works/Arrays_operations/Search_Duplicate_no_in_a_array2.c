// Program to find repeating element in an array (duplicate elements)

#include <stdio.h>
#include <stdlib.h>

void printRepeating(int arr[], int size)
{
  int i, j;
  printf("\nRepeating elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}
int main()
{
  int arr[50],arr_capacity;
  printf("specify the storing capacity of the array: ");
  scanf("%d", &arr_capacity);

  for (int i = 0; i < arr_capacity; i++)
  {
    scanf("%d", &arr[i]);
    printf(" %3d",arr[i]);
  }

//int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_capacity);
  return 0;
}