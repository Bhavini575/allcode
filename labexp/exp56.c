#include <stdio.h>

int globalVar = 10;

void showGlobal() {
    printf("In showGlobal, globalVar = %d\n", globalVar);
}

void changeGlobal() 
{
    globalVar = globalVar + 5;
    printf("In changeGlobal, globalVar = %d\n", globalVar);
}

int main() 
{
    printf("At start, globalVar = %d\n", globalVar);

    showGlobal();  
    changeGlobal(); 
    showGlobal();
    return 0;
}
