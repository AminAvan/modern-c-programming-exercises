/*
A program that asks the user to enter a fraction, then reduces teh fraction to the lowest values.
*/

#include <stdio.h>

int main(void){
    int inp_1, inp_2, numerator, denominator, remain_val, gcd_val;

    printf("\nEnter a fraction (x/y): ");
    scanf("%d/%d", &numerator, &denominator);

    inp_1 = numerator;
    inp_2 = denominator;

    while ((inp_1 != 0) && (inp_2 != 0)){
        remain_val = inp_1 % inp_2;
        inp_1 = inp_2;
        inp_2 = remain_val;
    }

    if (inp_1 == 0){
        gcd_val = inp_2;
    } else if (inp_2 == 0){
        gcd_val = inp_1;
    }

    printf("In lowest term: %d/%d", (numerator/gcd_val), (denominator/gcd_val));

    return 0;
}