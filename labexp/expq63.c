#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number whose frequency you want to find: ");
    scanf("%d", &num);
    //cant make it after this

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("\nThe frequency of %d is: %d\n", num, count);

    return 0;
}
