#include <stdio.h>

int sumDigits(int number);

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    
    sumDigits(n) != 10 ? printf("NO\n") : printf("YES\n"); 
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