#include <stdio.h>

int sumDigits(int number);
int mulDigits(int number);

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 10; i <= n; ++i)
    {
        int sum = sumDigits(i);
        int mul = mulDigits(i);
        if (sum == mul)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int sumDigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int mulDigits(int number)
{
    int mul = 1;
    while (number > 0)
    {
        mul *= number % 10;
        number /= 10;
    }
    return mul;
}