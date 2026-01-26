/*
Reversing the digits based on math expressions.
*/

#include <stdio.h>

int main(void){
    int input, output;

    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    output = ((input % 10) * 10) + (input / 10);
    printf("The reversal is: %02d", output);

    return 0;
}