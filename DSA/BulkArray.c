#include <stdio.h>
int main()
{
   int size, total = 0;
   float average;
   int key;
   printf("Enter the size of an array:\n");
   scanf("%d", &size);
   int array[size];
   printf("Enter %i numbers:\n", size);
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &array[i]);
   }
   printf("Printing the elements of an array\n");
   for (int i = 0; i < size; i++)
   {
      printf("Array[%d] = %i\n", i, array[i]);
   }
   for (int i = 0; i < size; i++)
   {
      total += array[i];
   }
   printf("The sum of the elements above  is %i\n", total);
   average = total / (float)size;
   printf("The average of the above elements is %f\n", average);
   // Linear Search
   printf("Enter the key to search:");
   scanf("%i", &key);
   for (int i = 0; i < size; i++)
   {
      if (array[i] == key)
      {
         printf("%i found at position %i.", array[i], i);
         return 0;
      }
   }
   printf("Element not found");
}