#include <stdio.h>

int main(void){
    float loan, interest_rate, mnth_pay, rmn_aftr_1st_pay, rmn_aftr_2nd_pay, rmn_aftr_3rd_pay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    interest_rate = ((interest_rate / 100) / 12) + 1; // calculate the interest-rate per month

    printf("Enter monthly payment: ");
    scanf("%f", &mnth_pay);

    rmn_aftr_1st_pay = (loan * interest_rate) - mnth_pay;
    loan = rmn_aftr_1st_pay;
    printf("Balance remaining after 1st payment: %.2f\n", rmn_aftr_1st_pay);

    rmn_aftr_2nd_pay = (loan * interest_rate) - mnth_pay;
    loan = rmn_aftr_2nd_pay;
    printf("Balance remaining after 2nd payment: %.2f\n", rmn_aftr_2nd_pay);

    rmn_aftr_3rd_pay = (loan * interest_rate) - mnth_pay;
    loan = rmn_aftr_3rd_pay;
    printf("Balance remaining after 3rd payment: %.2f\n", rmn_aftr_3rd_pay);

    return 0;
}