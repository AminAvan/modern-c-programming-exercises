#include <stdio.h>

int main(void){
    unsigned int a, b, c;
    short int dd, ee, ff;

    printf("\nwrite a number in base-10: ");
    scanf("%u", &a);
    printf("The entered number in base-10 is: %u \n", a);

    printf("\nwrite a number in base-8: ");
    scanf("%o", &b);
    printf("The entered number in base-8 is: %o \n", b);

    printf("\nwrite a number in base-16: ");
    scanf("%x", &c);
    printf("The entered number in base-16 is: %x \n", c);


    printf("\nwrite a short-integer number in base-10: ");
    scanf("%hu", &a);
    printf("The entered short-integer number in base-10 is: %hu \n", a);

    printf("\nwrite a short-integer number in base-8: ");
    scanf("%ho", &b);
    printf("The short-integer entered number in base-8 is: %ho \n", b);

    printf("\nwrite a short-integer number in base-16: ");
    scanf("%hx", &c);
    printf("The entered short-integer number in base-16 is: %hx \n", c);

    return 0;
}