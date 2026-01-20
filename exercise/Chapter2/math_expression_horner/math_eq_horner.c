/*
Calculating a math equation as "3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6" with x given by user.
However, the Horner's Rule is applied to the abovementioned formula to make it more hardware&time efficient that it is.
Where, instead of conducting exponations, they are replaced with nested-multiplications.
*/

#include <stdio.h>

int main (void) {
    int x, output_x;

    printf("Enter the value for 'x': ");
    scanf("%d", &x);

    output_x = ((((3*x + 2)* x - 5)* x - 1)* x + 7)* x - 6;
    printf("Output for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", output_x);

    return 0;
}