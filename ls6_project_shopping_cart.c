#include <stdio.h>

int main() {
    // SHOPING CART PROGRAM
    char item[50] = "";
    float price = 0.0f; 
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each item?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s", quantity, item);
    printf("The total is %c%.2f\n", currency, total);

    return 0;
}