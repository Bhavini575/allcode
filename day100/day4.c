// without using 3rd var
#include <stdio.h>
int main() 
{
    int a, b;

    printf("Enter two no: ");
    scanf("%d %d", &a, &b);

    printf("no are: a=%d, b=%d\n", a, b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("now no are: a=%d, b=%d\n", a, b);

    return 0;
}
 //done with the help