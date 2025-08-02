#include <stdio.h>

int main(void) 
{
    int countNumbers = 0;
    int number = 0;
    do
    {
        scanf("%d", &number);
        ++countNumbers;
    } while (number != 0);
    printf("%d\n", countNumbers-1);
    return 0;
}