#include <stdio.h>

int absolute(int);

int main(void) 
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", absolute(a));
    return 0;
}

int absolute(int number)
{
    return number < 0 ? -number : number;
}