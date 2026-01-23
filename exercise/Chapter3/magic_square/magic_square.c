#include <stdio.h>

int main(void){
    int x_11, x_12, x_13, x_14, row_1;
    int x_21, x_22, x_23, x_24, row_2;
    int x_31, x_32, x_33, x_34, row_3;
    int x_41, x_42, x_43, x_44, row_4;
    int col_1, col_2, col_3, col_4;
    int diagonal_a, diagonal_b; 
    
    printf("Enter the number from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &x_11, &x_12, &x_13, &x_14, &x_21, &x_22, &x_23, &x_24, &x_31, &x_32, &x_33, &x_34, &x_41, &x_42, &x_43, &x_44);
    
    row_1 = x_11 + x_12 + x_13 + x_14;
    row_2 = x_21 + x_22 + x_23 + x_24;
    row_3 = x_31 + x_32 + x_33 + x_34;
    row_4 = x_41 + x_42 + x_43 + x_44;

    col_1 = x_11 + x_21 + x_31 + x_41;
    col_2 = x_12 + x_22 + x_32 + x_42;
    col_3 = x_13 + x_23 + x_33 + x_43;
    col_4 = x_14 + x_24 + x_34 + x_44;

    diagonal_a = x_11 + x_22 + x_33 + x_44;
    diagonal_b = x_41 + x_32 + x_23 + x_14;

    printf("\nRow sums: %d %d %d %d\n", row_1, row_2, row_3, row_4);
    printf("Column sums: %d %d %d %d\n", col_1, col_2, col_3, col_4);
    printf("Diagonal sums: %d %d\n", diagonal_a, diagonal_a);

    return 0;
}