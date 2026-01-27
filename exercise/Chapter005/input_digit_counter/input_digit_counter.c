/*
A program that counts how many digits the provided number by user is have.
Only use "if" and consider there would be no more than 5 digits input.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int input, num_digit;
    bool is_valid = false;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (1 < input && input <= 9){
        num_digit = 1;
        is_valid = true;
    } else if (10 < input && input <= 99){
        num_digit = 2;
        is_valid = true;
    } else if (100 < input && input <= 999){
        num_digit = 3;
        is_valid = true;
    } else if (1000 < input && input <= 9999){
        num_digit = 4;
        is_valid = true;
    } else if (10000 < input && input <= 99999){
        num_digit = 5;
        is_valid = true;
    } else {
        printf("The input is out of valid range!");
    }
    
    if (is_valid) printf("The number %d has %d digits!\n", input, num_digit);

    return 0;
}