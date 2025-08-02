#include <stdio.h>

int countEven(int number);
int countOdd(int number);

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int even = countEven(n);
    int odd = countOdd(n);
    printf("%d %d\n", even, odd);
    return 0;
}

int countEven(int number)
{
    int count = 0;
    int lastDigit = 0;
    while (number > 0)
    {
        lastDigit = number % 10;
        if (lastDigit % 2 == 0)
        {
            ++count;
        }
        number /= 10;
    }
    return count;
}

int countOdd(int number)
{
    int count = 0;
    int lastDigit = 0;
    while (number > 0)
    {
        lastDigit = number % 10;
        if (lastDigit % 2 != 0)
        {
            ++count;
        }
        number /= 10;
    }
    return count;
}