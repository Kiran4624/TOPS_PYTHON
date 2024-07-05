#include <stdio.h>

int main()
{    
    int array[50], max, size, c, loc = 1;
    
    printf("Enter the number of elements : \n");
    scanf("%d", &size);
    
    printf("Enter integer %d\n", size);
    
    for (c = 0; c < size; c+=1)
        scanf("%d", &array[c]);
    max = array[0];
    
    for (c = 1; c < size; c+=1)
    {
        if (array[c] > max)
        {
                max  = array[c];
                loc = c+1;
        }
    }
    
    printf("Maximum element is :%d and  value is :%d.\n", loc, max);
    return 0;    
}