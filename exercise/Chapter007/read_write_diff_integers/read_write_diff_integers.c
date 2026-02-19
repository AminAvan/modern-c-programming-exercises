#include <stdio.h>

int main(void){
    unsigned int a, b, c;

    printf("\nwrite a number in base-10: ");
    scanf("%u", &a);
    printf("The entered number in base-10 is: %u \n", a);

    printf("\nwrite a number in base-8: ");
    scanf("%o", &b);
    printf("The entered number in base-8 is: %o \n", b);

    printf("\nwrite a number in base-16: ");
    scanf("%x", &c);
    printf("The entered number in base-16 is: %x \n", c);

    return 0;
}