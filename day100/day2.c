#include <stdio.h>
int main ()
{
 float area , circum , r ;
 printf("what is radius:");
 scanf("%f",&r);

 area = ( 22/7 ) * r * r;
 circum = 2 * r * ( 22 / 7);

 printf("area=%f\n",area);
 printf("circumference=%f\n",circum);


    return 0;
}