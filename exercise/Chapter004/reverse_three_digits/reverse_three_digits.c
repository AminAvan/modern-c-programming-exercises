/*
Reversing the three digits based on arithmetic expressions.
*/

#include <stdio.h>

int main(void){
    int input, output;

    printf("Enter a three-digit number: ");
    scanf("%d", &input);

    output = ((input % 10) * 100) + (((input / 10) % 10) * 10) + (input / 100);
    printf("The reversal is: %03d", output);

    return 0;
}