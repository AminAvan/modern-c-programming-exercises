#include <stdio.h>

int main(void){
    int user_input, num_digits = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &user_input);

    do {
        num_digits += 1;
        user_input /= 10;
    } while (user_input > 0);

    printf("The number has %d digit(s).", num_digits);

    return 0;
}