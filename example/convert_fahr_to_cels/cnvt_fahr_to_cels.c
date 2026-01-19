/*
Converts a fahrenheit temperature to celsius.
*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_RATIO (5.0f/9.0f)

int main(void){
    float tmp_fahr, tmp_c;

    printf("Enter Fahrenheit temprature: ");
    scanf("%f", &tmp_fahr);
    
    tmp_c = (tmp_fahr - FREEZING_PT) * (SCALE_RATIO);

    printf("\nEquivalent temprature in Celsius: %.1f\n", tmp_c);

    return 0;
}