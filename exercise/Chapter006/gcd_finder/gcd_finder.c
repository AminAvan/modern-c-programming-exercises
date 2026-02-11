/*
A program that computes the "Greatest Common Divisor (GCD)" of two entered numbers.
*/

#include <stdio.h>

int main(void){
    int inp_1, inp_2, remain_val;

    printf("\nEnter two integers: ");
    scanf("%d %d", &inp_1, &inp_2);

    while ((inp_1 != 0) && (inp_2 != 0)){
        remain_val = inp_1 % inp_2;
        inp_1 = inp_2;
        inp_2 = remain_val;
    }

    if (inp_1 == 0){
        printf("Greatest common divisor: %d", inp_2);
    } else if (inp_2 == 0){
        printf("Greatest common divisor: %d", inp_1);
    }

    return 0;
}