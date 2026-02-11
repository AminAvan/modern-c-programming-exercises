/*
The user enter the amount of the trade, then program print the amount of the broker's commission, where the user can provide several amount of tarde and its broker.
The program stops as soon as the user enter 0.
*/

#include <stdio.h>

int main(void){
    float val_trade, val_commission;

    printf("Enter value of trade: ");
    scanf("%f", &val_trade);

    while (val_trade != 0){
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

        printf("Commission: %.2f", val_commission);
        
        printf("\nEnter value of trade: ");
        scanf("%f", &val_trade);
    }

    return 0;
}