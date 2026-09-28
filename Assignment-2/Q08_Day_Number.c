#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday - Working Day\n");
            break;
        case 2:
            printf("Tuesday - Working Day\n");
            break;
        case 3:
            printf("Wednesday - Working Day\n");
            break;
        case 4:
            printf("Thursday - Working Day\n");
            break;
        case 5:
            printf("Friday - Working Day\n");
            break;
        case 6:
            printf("Saturday - Weekend\n");
            break;
        case 7:
            printf("Sunday - Weekend\n");
            break;
        default:
            printf("Invalid Day\n");
    }

    return 0;
}
