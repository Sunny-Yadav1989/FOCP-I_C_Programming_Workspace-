#include <stdio.h>

unsigned long long gcd(long long a, long long b)
{
    unsigned long long x, y, remainder;

    /* Convert safely even when an input is LLONG_MIN. */
    x = (a < 0) ? (unsigned long long)(-(a + 1)) + 1 : (unsigned long long)a;
    y = (b < 0) ? (unsigned long long)(-(b + 1)) + 1 : (unsigned long long)b;

    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    return x;
}

int main(void)
{
    long long a, b;

    if (scanf("%lld %lld", &a, &b) != 2)
        return 1;

    /* The problem guarantees that a and b are not both zero. */
    if (a == 0 && b == 0)
        return 1;

    printf("%llu\n", gcd(a, b));
    return 0;
}
