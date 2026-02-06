/*
the user enter the amount of the trade, then program print the amount of the broker's commission.
*/

#include <stdio.h>

int main(void){
    float val_trade, val_commission, num_shares, price_per_share, rival_broker_charge;

    printf("Enter the number of shares: ");
    scanf("%f", &num_shares);

    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    val_trade = num_shares * price_per_share;

    if (val_trade < 2500.00f){
        val_commission = 30.00f + (val_trade * (1.7f/100.00f));
    } else if (2500.00f < val_trade && val_trade < 6250.00f) {
        val_commission = 56.00f + (val_trade * (0.66f/100.00f));
    } else if (6250.00f < val_trade && val_trade < 20000.00f) {
        val_commission = 76.00f + (val_trade * (0.34f/100.00f));
    } else if (20000.00f < val_trade && val_trade < 50000.00f) {
        val_commission = 100.00f + (val_trade * (0.22f/100.00f));
    } else if (50000.00f < val_trade && val_trade < 500000.00f) {
        val_commission = 155.00f + (val_trade * (0.11f/100.00f));
    } else if (val_trade > 500000.00f) {
        val_commission = 255.00f + (val_trade * (0.09f/100.00f));
    }

    if (val_commission < 39.00f){
        val_commission = 39.00f;
    }

    if (num_shares >= 2000){
        rival_broker_charge = 33.00f + (00.02 * num_shares);
    } if (num_shares < 2000){
        rival_broker_charge = 33.00f + (00.03 * num_shares);
    }

    printf("\nCommission of original broker: %.2f\n", val_commission);
    printf("Commission of rival broker: %.2f", rival_broker_charge);

    return 0;
}