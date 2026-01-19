/*
Computes the dimensional weight of a box from input provided by the user.
*/

#include <stdio.h>

int main(void){
    int length, width, height, volume, dim_weight, const_vol_weight = 166, round_up_weight = 165;

    printf("Enter height of box (inch): ");
    scanf("%d", &height);
    printf("Enter width of box (inch): ");
    scanf("%d", &width);
    printf("Enter length of box (inch): ");
    scanf("%d", &length);

    volume = length * width * height;
    dim_weight = (volume + round_up_weight) / const_vol_weight;

    printf("\nDimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", dim_weight);

    return 0;
}