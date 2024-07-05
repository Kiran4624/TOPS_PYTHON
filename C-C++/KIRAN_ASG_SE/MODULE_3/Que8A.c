//pyramid program
#include <stdio.h>
int main()
{
    int row;
    printf("Enter the number of row: \n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i+=1)
    {
        for (int j = 1; j <= i; j+=1)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}

