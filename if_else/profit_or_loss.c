#include <stdio.h>

int main() {
    float cost_price, selling_price;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        printf("Profit: %.2f\n", selling_price - cost_price);
    } else if (selling_price < cost_price) {
        printf("Loss: %.2f\n", cost_price - selling_price);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
