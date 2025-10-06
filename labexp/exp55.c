#include <stdio.h>

int main() {
    int a, b, c, d;
    int limit;

    printf("Enter the limit (L): ");
    scanf("%d", &limit);

    printf("\nRamanujan Numbers up to %d^3 are:\n\n", limit);

    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) {
            for (c = a+1; c <= limit; c++) {
                for (d = c; d <= limit; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
