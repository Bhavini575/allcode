#include <stdio.h>

int main() {
    int year;
    double population = 100000;  

    printf("Initial Population = %.0f\n", population);
    printf("Population growth in last 10 years:\n");

    for (year = 1; year <= 10; year++)
     {
        population = population + (population * 0.10); 
        printf("Year %d : %.0f\n", year, population);
    }

    return 0;
}

