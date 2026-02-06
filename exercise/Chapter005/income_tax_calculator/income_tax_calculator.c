#include <stdio.h>

int main(void){
    float user_income, tax_value;

    printf("Enter your amount of income: ");
    scanf("%f", &user_income);

    if (user_income < 750){
        tax_value = user_income * 0.01f;
    } else if (750 <= user_income && user_income <= 2250){
        tax_value = 7.50f + (user_income * 0.02f);
    } else if (2250 <= user_income && user_income <= 3750){
        tax_value = 37.50f + (user_income * 0.03f);
    } else if (3750 <= user_income && user_income <= 5250){
        tax_value = 82.50f + (user_income * 0.04f);
    } else if (5250 <= user_income && user_income <= 7000){
        tax_value = 142.50f + (user_income * 0.05f);
    } else if (user_income > 7000){
        tax_value = 230.00f + (user_income * 0.06f);
    }

    printf("The tax value for the income %.2f$ is %.2f$.", user_income, tax_value);

    return 0;
}