#include <stdio.h>

int main(void)
{
    int a;
    int hundred, ten, one;

    scanf("%d", &a);
    hundred = a/100;
    ten = a%100/10;
    one = a%10;
    printf("%d", hundred+ten+one);
}