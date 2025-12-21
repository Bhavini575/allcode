//swaping
#include <stdio.h>
int main ()
{
    int a, b, c;

    printf ("enter two no:");
    scanf ("%d %d",&a, &b );

    printf ("no are: a=%d, b=%d\n", a, b);

    c=a;
    a=b;
    b=c;
    
    printf("now the no are: a=%d, b=%d\n", a, b);

    return 0;

}