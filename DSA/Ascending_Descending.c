#include <stdio.h>
int size;
int temp;
checkAscendingOrder(int size, int array[])
{
   for (int i = 0; i < size; i++)
   {
      for (int j = i + 1; j < size; j++)
      {
         if (array[i] > array[j])
         {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
   }
   printf(("In Ascending order: "));
   for (int i = 0; i < size; i++)
   {
      printf("%i", array[i]);
   }
}
checkDescendingOrder(int size, int array[])
{
   for (int i = 0; i < size; i++)
   {
      for (int j = i + 1; j < size; j++)
      {
         if (array[i] < array[j])
         {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
   }
   printf("In Descending Order: ");
   for (int i = 0; i < size; i++)
   {
      printf("%i", array[i]);
   }
}
int main()
{

   printf("Enter the size of an array:\n");
   scanf("%d", &size);
   int array[size];
   printf("Enter %i numbers:\n", size);
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &array[i]);
   }
   checkAscendingOrder(size, array);
   printf("\n");
   checkDescendingOrder(size, array);
}