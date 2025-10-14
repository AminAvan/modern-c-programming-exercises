#include <stdio.h>

int integer;
float floating;

int main (){
    printf("floating = 1.0 / 2.0 => %f\n", (1.0 / 2.0));
    printf("integer = 1 / 3 => %d\n", (1 / 3));
    printf("floating = (1 / 2) + (1 / 2) => %f\n", ((1 / 2) + (1 / 2)));
    printf("floating = 3.0 / 2.0 => %f\n", (3.0 / 2.0));
    printf("integer = floating => %d\n", (integer = floating));
    return(0);
}