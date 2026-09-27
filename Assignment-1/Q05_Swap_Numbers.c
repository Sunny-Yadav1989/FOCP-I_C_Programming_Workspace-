#include <stdio.h>

int main() {
    int first, second, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("Before swapping: %d %d\n", first, second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping: %d %d\n", first, second);

    return 0;
}
