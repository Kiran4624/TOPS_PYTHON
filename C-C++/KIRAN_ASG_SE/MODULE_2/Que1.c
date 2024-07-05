//W.A.P  make a square and cube to given number.


#include<stdio.h>

void main()
{
 int a,b,c;
 

 printf("\n Enter A Number: ");
 scanf("%d",&a);

 b=a*a;  
 c=b*a;  

 printf("\n Square of %d is = %d",a,b);

 printf("\n\n Cube of %d is = %d",a,c);

return 0;
}