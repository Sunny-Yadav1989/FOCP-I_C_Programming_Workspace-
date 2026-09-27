#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter marks of five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage  = %.2f%%\n", percentage);

    return 0;
}
