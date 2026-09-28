#include <stdio.h>

int main() {
    int dividend, divisor;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor == 0) {
        printf("Division by zero is not possible.\n");
    } else {
        printf("Quotient = %d\n", dividend / divisor);
        printf("Remainder = %d\n", dividend % divisor);
    }

    return 0;
}
