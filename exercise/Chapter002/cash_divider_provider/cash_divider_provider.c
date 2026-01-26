#include <stdio.h>

#define BILL_20 20
#define BILL_10 10
#define BILL_5 5
#define BILL_1 1

int main(void){
    int inp_amount, num_bill_20, num_bill_10, num_bill_5, num_bill_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &inp_amount);

    num_bill_20 = inp_amount / BILL_20;
    inp_amount = inp_amount - (num_bill_20 * BILL_20);

    num_bill_10 = inp_amount / BILL_10;
    inp_amount = inp_amount - (num_bill_10 * BILL_10);

    num_bill_5 = inp_amount / BILL_5;
    inp_amount = inp_amount - (num_bill_5 * BILL_5);

    num_bill_1 = inp_amount / BILL_1;
    inp_amount = inp_amount - (num_bill_1 * BILL_1);

    printf("$20 bills: %d\n", num_bill_20);
    printf("$10 bills: %d\n", num_bill_10);
    printf("$5 bills: %d\n", num_bill_5);
    printf("$1 bills: %d\n", num_bill_1);

    return 0;
}