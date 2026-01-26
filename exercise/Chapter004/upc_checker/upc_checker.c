#include <stdio.h>

int main(void){
    int first_digit, first_group, second_group, check_digit;

    printf("Enter the first (single) digit: ");
    scanf("%d", &first_digit);

    printf("Enter the first group of five digits: ");
    scanf("%d", &first_group);

    printf("Enter the second group of five digits: ");
    scanf("%d", &second_group);

    printf("Enter the last (single) digit: ");
    scanf("%d", &check_digit);

    return 0;
}