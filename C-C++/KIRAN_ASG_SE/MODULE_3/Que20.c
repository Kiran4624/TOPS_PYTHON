//Write a program to sort the numbers using pointer and functions
#include<stdio.h>
int sort(int num,int *ptr)
{
    int i,j,temp;
    for(i=0;i<=num;i++)
    {
        for(j=i+1;j<=num;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                temp= *(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
        for(i=0;i<=num;i++)
         printf("%d \t",*(ptr+i));
 }
    int main()
    {
        int num=5;
        int arr1[]={52,9,7,42,32};
        sort(num,arr1);
    }
