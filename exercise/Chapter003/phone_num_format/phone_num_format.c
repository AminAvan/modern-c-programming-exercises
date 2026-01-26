#include <stdio.h>

int main(void){
    int code_a, code_b, code_c;
    
    printf("Enter phone number: ");
    scanf("(%d) %d-%d", &code_a, &code_b, &code_c);

    printf("%d.%d.%d", code_a, code_b, code_c);

    return 0;
}