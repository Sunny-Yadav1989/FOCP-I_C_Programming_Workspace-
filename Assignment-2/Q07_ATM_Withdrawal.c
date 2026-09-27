#include <stdio.h>

int main() {
    int pin, amount;
    float balance;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    printf("Enter account balance: ");
    scanf("%f", &balance);

    if (pin != 1234) {
        printf("Invalid PIN\n");
    } else if (amount <= 0 || amount % 100 != 0) {
        printf("Invalid Amount\n");
    } else if (amount > balance) {
        printf("Insufficient Balance\n");
    } else {
        printf("Withdrawal Successful\n");
    }

    return 0;
}
