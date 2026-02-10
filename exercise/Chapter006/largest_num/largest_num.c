#include <stdio.h>

int main(void){
    float max = -1.0f, user_input;

    printf("Enter a number: ");
    scanf("%f", &user_input);

    while (user_input > 0){
        if (user_input > max ){
            max = user_input;
        }
        printf("Enter a number: ");
        scanf("%f", &user_input);
    }

    printf("The largest number entered was %.02f", max);

    return 0;
}