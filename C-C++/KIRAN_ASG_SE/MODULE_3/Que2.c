
#include <stdio.h> 
int main()
{ 
int num, i, x = 0; 

printf("Enter any number:"); 
scanf("%d", &num);  
for (i = 2; i <= num; i+=1) 
{ 
if (num % i == 0)  
{ 
x+=1; 
} 
} 

if (x == 1)
{ 
printf("%d is a Prime number", num ); 
} 

else 
printf("%d is not a Prime number", num); 

return 0;
}