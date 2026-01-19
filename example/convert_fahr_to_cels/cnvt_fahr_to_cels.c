/*
Converts a fahrenheit temperature to celsius.
*/

#include <stdio.h>

int main(void){
    float tmp_fahr, tmp_c;

    printf("Enter Fahrenheit temprature: ");
    scanf("%f", &tmp_fahr);
    
    tmp_c = (tmp_fahr - 32.0) * (5.0/9.0);

    printf("\nEquivalent temprature in Celsius: %.1f\n", tmp_c);

    return 0;
}