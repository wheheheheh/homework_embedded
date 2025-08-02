#include <stdio.h>

int minNumber(int number);
int maxNumber(int number);

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int minN = minNumber(n);
    int maxN = maxNumber(n);
    printf("%d %d\n", minN, maxN);
    return 0;
}

int minNumber(int number)
{
    int min = 9;
    int lastDigit = 0;
    while (number > 0)
    {
        lastDigit = number % 10;
        if (lastDigit < min)
        {
            min = lastDigit;
        }
        number /= 10;
    }
    return min;
}

int maxNumber(int number)
{
    int max = 0;
    int lastDigit = 0;
    while (number > 0)
    {
        lastDigit = number % 10;
        if (lastDigit > max)
        {
            max = lastDigit;
        }
        number /= 10;
    }
    return max;
}