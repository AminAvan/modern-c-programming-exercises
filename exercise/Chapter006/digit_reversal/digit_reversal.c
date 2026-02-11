/*
Reversing the three digits based on "DO-WHILE".
*/

#include <stdio.h>

int main(void){
    int user_input;

    printf("\nEnter a three-digit number: ");
    scanf("%d", &user_input);

    printf("The reversal is: ");
    do {
        printf("%d", (user_input % 10));
        user_input /= 10;
    } while (user_input != 0);

    return 0;
}