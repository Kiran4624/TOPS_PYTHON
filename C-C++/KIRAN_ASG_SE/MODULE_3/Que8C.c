#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows;
    int col;
    int sp;
    printf("Enter the number of rows : ");
    scanf(" %d",&rows);
    for(int i=0; i<rows; i++)
    {
        for(int sp=0;sp<i; sp+=1)
        {
            printf(" ");
        }
        for(int j=0;j<rows-i;j+=1)
        {
            printf("* ");
        }
        printf("\n");

    }
     printf("\n");
    return 0;
}