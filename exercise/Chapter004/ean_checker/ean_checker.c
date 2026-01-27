/*
Check the correctness of provided European Article Number (EAN) (barcode), where acquire the input within a one input prompt rather multiple prompting for having the inputs.
*/
#include <stdio.h>

int main(void){
    int i_1, i_2, i_3, i_4, i_5, i_6, i_7, i_8, i_9, i_10, i_11, i_12, sum_a, sum_b, total;

    printf("Enter the whole UPC number: ");    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i_1, &i_2, &i_3, &i_4, &i_5, &i_6, &i_7, &i_8, &i_9, &i_10, &i_11, &i_12);

    /* calculating the upc correctness */
    sum_a = (i_2+ i_4 + i_6 + i_8 + i_10 + i_12) * 3;
    sum_b = i_1 + i_3 + i_5 + i_7 + i_9 + i_11;

    total = 9 - (((sum_a + sum_b) - 1) % 10);
    
    printf("Check digit: %d", total);

    return 0;
}