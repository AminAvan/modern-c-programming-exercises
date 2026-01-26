/*
converter an input from base-10 to base-8.
*/
#include <stdio.h>

int main (void){
    int input, output;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    output = (input % 8);
    output += ((input/=8) % 8) * 10;
    output += ((input/=8) % 8) * 100;
    output += ((input/=8) % 8) * 1000;
    output += ((input/=8) % 8) * 10000;
    printf("In octal, inputed number is: %05d", output);

    return 0;
}