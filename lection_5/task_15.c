#include <stdio.h>

int main(void) 
{
    int countNonZero = 0;
    int number = 0;
    do
    {
        scanf("%d", &number);
        if (number % 2 == 0)
            ++countNonZero;
    } while (number != 0);
    printf("%d\n", countNonZero-1);
    return 0;
}