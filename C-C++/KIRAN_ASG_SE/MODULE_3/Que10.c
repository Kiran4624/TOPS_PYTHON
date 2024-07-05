//sort the array of 5 elements 
//decending order
#include <stdio.h>
int main ()
{
   int num[5];
   int i, j, a, n;
   printf("enter number of elements in an array:");
   scanf("%d", &n);
   printf("\nEnter the elements:");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
      {
         if (num[i] < num[j])//>
         {
              a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("\nThe numbers in descending order is:");
   for (i = 0; i < n; ++i)
   {
      printf(" %d ", num[i]);
   }
}



           