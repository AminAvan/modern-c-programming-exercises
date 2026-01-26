/*
Check the correctness of provided UPC (barcode).
*/
#include <stdio.h>

int main(void){
    int d, i_1, i_2, i_3, i_4, i_5, j_1, j_2, j_3, j_4, j_5, sum_a, sum_b, total;

    printf("Enter the first (single) digit: ");    
    scanf("%1d", &d);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i_1, &i_2, &i_3, &i_4, &i_5);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j_1, &j_2, &j_3, &j_4, &j_5);

    /* calculating the upc correctness */
    sum_a = (d + i_2 + i_4 + j_1 + j_3 + j_5) * 3;
    sum_b = i_1 + i_3 + i_5 + j_2 + j_4;

    total = 9 - (((sum_a + sum_b) - 1) % 10);
    
    printf("Check digit: %d", total);

    return 0;
}