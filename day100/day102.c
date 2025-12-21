#include <stdio.h>
int main ()
{
    int weekday;

    printf("enter a day from 1 to 7:");
    scanf("%d",&weekday);

    switch (weekday)
    {
       
        case 1 :
        printf("MONDAY.\n");
        break;

        case 2 :
        printf("TUESDAY.\n");
        break;

        case 3 :
        printf("WEDNESDAY");
        break;

        case 4 :
        printf("THURSDAY.\n");
        break;

        case 5 :
        printf("FRIDAY.\n");
        break;

        case 6 :
        printf("SATURDAY.\n");
        break;

        case 7 :
        printf("SUNDAY.\n");
        break;

        default :
        printf("invalid choice.\n");

    }

    return 0;
}