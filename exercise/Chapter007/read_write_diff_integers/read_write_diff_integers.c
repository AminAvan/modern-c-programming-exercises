#include <stdio.h>

int main(void){
    unsigned int a, b, c;
    short int dd, ee, ff;
    long int ggg, hhh, mmm;

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
    scanf("%hu", &dd);
    printf("The entered short-integer number in base-10 is: %hu \n", dd);

    printf("\nwrite a short-integer number in base-8: ");
    scanf("%ho", &ee);
    printf("The short-integer entered number in base-8 is: %ho \n", ee);

    printf("\nwrite a short-integer number in base-16: ");
    scanf("%hx", &ff);
    printf("The entered short-integer number in base-16 is: %hx \n", ff);

    
    printf("\nwrite a long-integer number in base-10: ");
    scanf("%lu", &ggg);
    printf("The entered short-integer number in base-10 is: %lu \n", ggg);

    printf("\nwrite a short-integer number in base-8: ");
    scanf("%lo", &hhh);
    printf("The short-integer entered number in base-8 is: %lo \n", hhh);

    printf("\nwrite a short-integer number in base-16: ");
    scanf("%lx", &mmm);
    printf("The entered short-integer number in base-16 is: %lx \n", mmm);

    return 0;
}