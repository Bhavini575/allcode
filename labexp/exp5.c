#include <stdio.h>

int main() 
{
    int num, positive = 0, negative = 0, zero = 0;
    char again;

    do 
    {
        printf("Enter any number: ");
        scanf("%d", &num);

        if (num > 0) 
        {
            positive++;
        } 
        else if (num < 0) 
        {
            negative++;
        } 
        else 
        {
            zero++;
        }

        printf("Do you want to enter another number (y/n)? ");
        scanf(" %c", &again);

    } 
    while (again == 'y' || again == 'Y');

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d\n", zero);

    return 0;
}
