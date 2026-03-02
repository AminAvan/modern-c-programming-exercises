#include <stdio.h>

int main(void){
    int a, c, i = 0, result = 0;
    float b;

    printf("Enter integer value to decompose it into its digit's place value: ");
    for (;;) {
        if (scanf("%1d", &c) == 1){
            if (i == 0){
            printf("\nThe %d is Ones.", c);
            }
            if (i == 1){
                printf("\nThe %d is Tens.", c);
            }
            if (i == 2){
                printf("\nThe %d is Hundreds.", c);
            }
            i += 1;
            printf("\nresult: %d", result);
        }
    }

    printf("\nEnter integer value for 'a': ");
    scanf("%d", &a);

    printf("\nEnter float value for 'b': ");
    scanf("%f", &b);

    printf("\nThe integer number's value is %d", a);
    printf("\nThe float number's value is %.2f", b);

    return 0;
}