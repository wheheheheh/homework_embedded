#include <stdio.h>

int func(int);

int main(void) 
{
    int input = 0;
    int currentNumber = 0;
    int maxNumber = 0;
    do
    {
        scanf("%d", &input);
        currentNumber = func(input);
        if (currentNumber > maxNumber)
            maxNumber = currentNumber;
    } while (input != 0);
    
    printf("%d\n", maxNumber);
    return 0;
}

int func(int x)
{
    if (x >= -2 && x < 2)
    {
        return x * x;
    }
    else if (x >= 2)
    {
        return (x*x + 4*x + 5);
    }
    else
    {
        return 4;
    }
}