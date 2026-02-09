#include <stdio.h>

int main(void){
    int tens_digit, ones_digit;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens_digit, &ones_digit);

    printf("You entered the number ");
    switch(tens_digit){
        case 9: printf("ninety"); break;
        case 8: printf("eighty"); break;
        case 7: printf("seventy"); break;
        case 6: printf("sixty"); break;
        case 5: printf("fifty"); break;
        case 4: printf("fourty"); break;
        case 3: printf("thirty"); break;
        case 2: printf("twenty"); break;
        case 1: printf("eleven"); break;
        default: printf("in-valid! "); break;
    }
    switch(ones_digit){
        case 9: printf("-nine"); break;
        case 8: printf("-eight"); break;
        case 7: printf("-seven"); break;
        case 6: printf("-six"); break;
        case 5: printf("-five"); break;
        case 4: printf("-four"); break;
        case 3: printf("-three"); break;
        case 2: printf("-two"); break;
        case 1: printf("-one"); break;
        default: printf("in-valid!"); break;
    }

    return 0;
}