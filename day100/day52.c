#include <stdio.h>
int main() 
{
    int ts, h, m, s;

    printf("Enter time in seconds: ");
    scanf("%d", &ts);

    h = ts / 3600;
    m = (ts % 3600) / 60;
    s = ts % 60;

    printf("Time = %02d:%02d:%02d\n", h, m, s);

    return 0;
}
