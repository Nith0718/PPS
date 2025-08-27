#include <stdio.h>

int main() {
    int shares;
    float purchasePrice, currentPrice, profit;

    printf("Enter number of shares purchased: ");
    scanf("%d", &shares);

    printf("Enter purchase price per share: ");
    scanf("%f", &purchasePrice);

    printf("Enter current price per share: ");
    scanf("%f", &currentPrice);

    profit = (shares * currentPrice) - (shares * purchasePrice);

    printf("You have made a profit of $%.2f dollars since you bought %d shares of this stock.\n", profit, shares);

    return 0;
}