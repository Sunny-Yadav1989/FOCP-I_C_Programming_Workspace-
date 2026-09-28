#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("\nEntered Details\n");
    printf("Age    : %d\n", age);
    printf("Height : %.2f m\n", height);
    printf("Grade  : %c\n", grade);

    return 0;
}
