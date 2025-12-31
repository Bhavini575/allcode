#include <stdio.h>

int main()
{
    char str[200];
    int i, v=0, c=0, d=0, s=0;
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0', i++)
    {
        if ((str[i]>'0' && str[i]<'9'))
        d++;
        else if(str[i] == ' ')
    }
}