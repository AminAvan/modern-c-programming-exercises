#include <stdio.h>

#define TAX_AMOUNT (0.05f) // equivalent to 5% tax

int main(void){
    float inp_cost, cost_with_tax;

    printf("Enter the amount: ");
    scanf("%f", &inp_cost);

    cost_with_tax = (inp_cost) * (1.0 + TAX_AMOUNT);
    printf("Amount with tax added: %.2f", cost_with_tax);

    return 0;
}