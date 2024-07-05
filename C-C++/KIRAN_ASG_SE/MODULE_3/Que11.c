//WAP to find the element of given position from the array.
#include<stdio.h>
int main()
{
   int a[100], size, ele, pos=0;
   int i;

   printf("Enter array size [1-100]: ");
   scanf("%d", &size);

   printf("Enter array elements: ");
   for(i=0; i<size; i++) 
   {
   scanf("%d", &a[i]);
   }
   printf("Enter element to search: ");
   scanf("%d",&ele);

   for(i=0; i<size; i++)
   {
     if(a[i]==ele)
     {
       printf(" found at position %d", ele, i+1);
      
     }
   }

   printf("%d not found.", ele);
}