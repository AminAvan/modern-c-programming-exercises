#include <stdio.h>

int main(void){

    printf("\nDecimal value of 077 is: %d", ( (0*(8*8)) + (7*(8)) + (7) ));
    printf("\nDecimal value of 0x77 is: %d", ( (7*(16)) + (7) ));
    printf("\nDecimal value of 0XABC is: %d", (
        (10*(16*16)) + (11*(16)) + 12
    ));

    return 0;
}