#include <stdio.h>

int main(void){
    int user_input;
    int total_input = 0;

    printf("\nThis program sums a series of integers!\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &user_input);

    while (user_input != 0){
        total_input += user_input;
        scanf("%d", &user_input);
    }

    printf("The sum is: %d", total_input);

    return 0;
}