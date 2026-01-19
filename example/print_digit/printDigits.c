#include <stdio.h>

int main(void){
    int x, y, area;
    float z;
    
    x = 3;
    y = 6;
    
    area = x * y;
    y = x / 3;

    printf("Area for a rectangle with %d and %d: %d.\n", x, y, area);
    printf("Ability to enforce the number of digit after the dot in float is as 1-digit: %.1f and 5-digit: %.5f.\n", z, z);

    return(0);
}