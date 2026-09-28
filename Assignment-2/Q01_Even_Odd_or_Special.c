#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 5 == 0)
        printf("Special\n");
    else if (number % 2 == 0)
        printf("Even\n");
    else if (number % 5 == 0)
        printf("Five\n");
    else
        printf("Odd/Other\n");

    return 0;
}
