//pyramid program

#include <stdio.h>
int main()
{  
    
    int n=4,row,col,sp,count=1;  
    
    for (row = 0; row <= n; row += 1)   
    {  
        for (sp = 1; sp <= (n - row); sp += 1)   
        {  
            printf("  ");     
        }  
        
       for(col =1; col <= row; col += 1) 
       {
        printf(" %d ",count);
        count += 1;
       }
    
    printf("\n");
    }
    return 0;
}

