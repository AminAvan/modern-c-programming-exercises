/*
Calculating a math equation as "3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6" with x given by user.
*/

#include <stdio.h>

int main (void) {
    int x, output_x;

    printf("Enter the value for 'x': ");
    scanf("%d", &x);

    output_x = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
    printf("Output for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", output_x);

    return 0;
}