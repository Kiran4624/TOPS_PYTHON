//  Write a Program of Print a number and check the number is palindrome or not using recursive
//Function.
#include<stdio.h>
int main()
{
    int i,num,reminder;
    for(i=1;i<=3;i++)
    {
        printf("\n enter number :");
        scanf("%d",&num);
         
         int temp=num;
         int rev=0;
         while(temp>0)
         {
            reminder=temp%10;
            rev=rev*10+reminder;
            temp=temp/10;

         }
         if(rev==num)
         {
            printf("num is palindrome.");
         }
         else
         {
            printf("num is not palindrome.");
         }
    }
}

 