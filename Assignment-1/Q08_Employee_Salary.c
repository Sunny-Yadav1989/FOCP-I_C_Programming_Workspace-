#include <stdio.h>

int main() {
    float basic, allowance, bonus, finalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    finalSalary = basic + allowance + bonus;

    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}
