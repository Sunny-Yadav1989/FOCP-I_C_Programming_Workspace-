#include <stdio.h>

int main() {
    int first, second, third;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    average = (first + second + third) / 3.0;

    printf("Average = %.2f\n", average);

    return 0;
}
