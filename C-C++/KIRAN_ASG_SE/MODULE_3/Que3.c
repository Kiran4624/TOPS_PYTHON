//WAP ENTER THE 5 SUBJECTS.you have to make a total and find the percentage.

#include<stdio.h>


void main()
{  
   int a,b,c,d,e,total;
   float percent;

   printf("enter your marks");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

   total=a+b+c+d+e;
 printf("\ntotal marks is %d\n",total);

   percent=total*100/(5.0*100);

   printf("percent is %f\n",percent);

   if(percent>75)
    printf("Distinction");
   else{  if(percent>60 && percent<=75)
             printf("first class");
    else  { if(percent>50 && percent <=60 )
                   printf("second class");
      else {  if(percent>35 && percent <=50  )
                          printf("pass class");
       else
                 printf("Fail");
           }
       }
   }
  return 0;
}