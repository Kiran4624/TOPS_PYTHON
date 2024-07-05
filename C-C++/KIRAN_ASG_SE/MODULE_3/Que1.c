//given year is leap year or not

#include <stdio.h>

int main()
{
   int yr; 
    printf("Enter the year : ");
    scanf("%d",&yr);

   if (((yr % 4 == 0) && (yr % 100!= 0)) || (yr % 400 == 0))

      printf("It is a leap year");

   else

      printf("It is not a leap year");

   return 0;

}