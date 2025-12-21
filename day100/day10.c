#include <stdio.h>
int main()
{
    int s1, s2, s3;

    printf("Enter all three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        printf("The sides form a triangle.\n");

        if (s1 == s2 && s2 == s3) {
            printf("Triangle is Equilateral.\n");
        }
        else if (s1 == s2 || s2 == s3 || s3 == s1) {
            printf("Triangle is Isosceles.\n");
        }
        else {
            printf("Triangle is Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
