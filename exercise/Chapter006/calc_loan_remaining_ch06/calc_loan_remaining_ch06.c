#include <stdio.h>

int main(void){
    float loan, interest_rate, mnth_pay, rmn_aftr_pay;
    int num_payments;

    printf("\nEnter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    interest_rate = ((interest_rate / 100) / 12) + 1; // calculate the interest-rate per month

    printf("Enter monthly payment: ");
    scanf("%f", &mnth_pay);

    printf("Enter the number of payments: ");
    scanf("%d", &num_payments);

    for (int i = 1; i <= num_payments; i++){
        rmn_aftr_pay = (loan * interest_rate) - mnth_pay;
        loan = rmn_aftr_pay;
        printf("Balance remaining after %d payment: %.2f\n", i, rmn_aftr_pay);    
    }

    return 0;
}