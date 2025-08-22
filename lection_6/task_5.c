#include <stdio.h>

int sumNumbers(int);

int main(void) 
{
    int number = 0;
    scanf("%d", &number);
    printf("%d\n", sumNumbers(number));
    return 0;
}

int sumNumbers(int n)
{
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += i;
    }
    return result;
}