//WAO to find out the max number from given matrix.
#include<stdio.h>

int main()
{
    int mat[5][5], i, j, max;
    printf("Enter any 5*5 matrix: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(max<mat[i][j])
                max = mat[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
}