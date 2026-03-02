#include <stdio.h>

int main(void){
    int user_input;

    printf("\nThis program prints a table of squares; enter number of entries in table: ");
    scanf("%d", &user_input);

    for (int i = 1; i <= user_input; i++){
        printf("%10d%10d\n", i, (i*i));
    }

    return 0;
}