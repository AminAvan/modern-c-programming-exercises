/*
Calculate the volume of a sphere based on the radius provided by user.
*/

#include <stdio.h>

#define CONST_FRACTION (4.0f/3.0f)
#define PI (3.14159f)

int main (void){
    float radius_sphere, sphere_volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius_sphere);

    sphere_volume = (PI)*(CONST_FRACTION)*(radius_sphere*radius_sphere*radius_sphere);

    printf("Volume of sphere: %f", sphere_volume);

    return 0;
}