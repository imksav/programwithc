#include <stdio.h>
int key, size;
BinarySearch(int array[], int begin_index, int end_index, int key)
{
   while (begin_index <= end_index)
   {
      int mid = begin_index + (end_index - begin_index) / 2;
      if (array[mid] == key)
         return mid;
      else if (array[mid] < key)
      {
         begin_index = mid + 1;
      }
      else
      {
         end_index = mid - 1;
      }
   }
   return -1;
}
int main()
{
   int array[] = {1, 3, 4, 5, 6, 9, 11, 15};
   size = sizeof(array) / sizeof(array[0]);
   printf("Printing the original array list: ");
   for (int array_clone = 0; array_clone < size; array_clone++)
   {
      printf("%i\t", array[array_clone]);
   }
   printf("\nEnter the key to search:");
   scanf("%i", &key);

   int check_index = BinarySearch(array, 0, size - 1, key);
   if (check_index == -1)
   {
      printf("Element you have searched is not found in the array .");

      // printf("Element you have searched is found in the array at position of %i.", check_index);
   }
   else
   {
      printf("Element you have searched is found in the array at position of %i.", check_index);

      // printf("Element you have searched is not found in the array .");
   }
}