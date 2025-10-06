#include <stdio.h>

int main() 
{
    int n = 3;  
    int num = 1; 

    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s > 0; s--) 
        {
            printf("   "); 
        }

        
        for (int j = 1; j <= i; j++) 
        {
            printf("%d   ", num);
            num++;
        }

        printf("\n"); 
    }

    return 0;
}
