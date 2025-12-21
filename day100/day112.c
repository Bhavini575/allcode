#include <stdio.h>
int main ()
{
    int sp, cp;
    float percentage;

    printf("Enter selling price and cost price: ");
    scanf("%d %d", &sp, &cp);

    if (sp > cp) {
        percentage = ((float)(sp - cp) / cp) * 100;
        printf("Profit is %.2f percent.\n", percentage);
    }
    else if (cp > sp) {
        percentage = ((float)(cp - sp) / cp) * 100;
        printf("Loss is %.2f percent.\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
