#include <stdio.h>

int main(void){
    int user_input;
    int i = 1;

    printf("\nThis program prints a table of squares; enter number of entries in table: ");
    scanf("%d", &user_input);

    while (user_input >= i){
        printf("%d      %d\n", i, (i*i));
        i++;
    }

    return 0;
}