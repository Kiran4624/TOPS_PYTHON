//WAP to find out the factorial of given number using function.
#include<stdio.h>
int fact();
int main()
{
    printf("Enter a Number: ");
    printf("\nFactorial of a Given Number is: %d ",fact());
    
}
int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
     {
        fact=fact*i;
    }
    return fact;
}