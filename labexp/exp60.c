#include <stdio.h>
int main ()
{
    int i, j, n ;
    int arr[n][n];
    printf("enter n");
    scanf("%d",&n);

    for (i=1; i<n; i++)
    {
        for (j=1; j<n; j++)
     {
        printf("%d",arr[i][j]);
     }
        
    }


    return 0;
}