#include <stdio.h>
int main ()
{
    int n, i;

    printf("Enter n:");
    scanf("%d", &n);
        int arr[n];


    printf("enter %d element:\n",n);
    for (i = 0; i < n; i++) 
        {
         scanf("%d", &arr[i]);
        }

        printf("array elements are:\n");
        for (i = 0; i < n; i++)  
        {
         printf("%d ", arr[i]);
        }



return 0;
}