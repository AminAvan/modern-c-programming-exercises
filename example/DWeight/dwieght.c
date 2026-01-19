#include <stdio.h>

int main(void){
    int length = 12, width = 10, height = 8, volume, dim_weight, const_vol_weight = 166, round_up_weight = 165;

    volume = length * width * height;
    dim_weight = (volume + round_up_weight) / const_vol_weight;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", dim_weight);

    return 0;
}