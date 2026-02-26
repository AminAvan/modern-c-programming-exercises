#include <stdio.h>

typedef float Dollars;

int main(void){
    Dollars cash_in, cash_out, revenue;

    printf("\nEnter cash-in: ");
    scanf("%f", &cash_in);
    printf("Enter cash-out: ");
    scanf("%f", &cash_out);

    printf("\nRevenue would be %.2f", (cash_in - cash_out));

    return 0;
}