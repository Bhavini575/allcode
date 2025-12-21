#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        int odd = 2 * i - 1;   
        sum = sum + odd;      
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
