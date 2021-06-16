#include <stdio.h>
int main()
{
   printf("==============To Check Palindrome================\n");
   int originalNum, reversedNum = 0, duplicateNum, remainder;
   printf("Enter data:\n");
   scanf("%i", &originalNum);
   duplicateNum = originalNum;
   while (duplicateNum != 0)
   {
      remainder = duplicateNum % 10;
      reversedNum = reversedNum * 10 + remainder;
      duplicateNum /= 10;
   }
   if (originalNum == reversedNum)
   {
      printf("=========================Result=========================\n");
      printf("The original number = %i.\nThe revesed number = %i.\nHence, the input number i.e. %i is palindrome.", originalNum, reversedNum, originalNum);
   }
}