#include <stdio.h>

long long rectangleArea(long long length, long long width)
{
    return length * width;
}

int main(void)
{
    long long length, width;

    if (scanf("%lld %lld", &length, &width) != 2)
        return 1;

    /* Assumes non-negative dimensions and a product within LLONG_MAX. */
    if (length < 0 || width < 0)
        return 1;

    printf("%lld\n", rectangleArea(length, width));
    return 0;
}
