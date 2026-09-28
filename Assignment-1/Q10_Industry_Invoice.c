#include <stdio.h>

int main() {
    int productId, quantity;
    float price, discountPercent;
    float subtotal, discountAmount, finalAmount;

    printf("Enter product ID: ");
    scanf("%d", &productId);

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter discount percentage: ");
    scanf("%f", &discountPercent);

    subtotal = price * quantity;
    discountAmount = subtotal * discountPercent / 100.0;
    finalAmount = subtotal - discountAmount;

    printf("\n----------- INVOICE -----------\n");
    printf("Product ID          : %d\n", productId);
    printf("Subtotal            : %.2f\n", subtotal);
    printf("Discount Amount     : %.2f\n", discountAmount);
    printf("Final Payable Amount: %.2f\n", finalAmount);
    printf("-------------------------------\n");

    return 0;
}
