/*
Check the correctness of provided UPC (barcode), where acquire the input within a one input prompt rather multiple prompting for having the inputs.
*/
#include <stdio.h>

int main(void){
    int d, i_1, i_2, i_3, i_4, i_5, j_1, j_2, j_3, j_4, j_5, sum_a, sum_b, total;

    printf("Enter the whole UPC number: ");    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i_1, &i_2, &i_3, &i_4, &i_5, &j_1, &j_2, &j_3, &j_4, &j_5);

    /* calculating the upc correctness */
    sum_a = (d + i_2 + i_4 + j_1 + j_3 + j_5) * 3;
    sum_b = i_1 + i_3 + i_5 + j_2 + j_4;

    total = 9 - (((sum_a + sum_b) - 1) % 10);
    
    printf("Check digit: %d", total);

    return 0;
}