#include <stdio.h>

int main() {
    float first, second, result;
    char operation;

    printf("Enter two numbers: ");
    scanf("%f %f", &first, &second);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            result = first + second;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = first - second;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = first * second;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (second == 0)
                printf("Cannot divide by zero.\n");
            else
                printf("Result = %.2f\n", first / second);
            break;
        case '%':
            if ((int)second == 0)
                printf("Cannot divide by zero.\n");
            else
                printf("Result = %d\n", (int)first % (int)second);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
