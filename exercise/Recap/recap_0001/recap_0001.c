#include <stdio.h>

int main(void){
    int a, c1, c2, c3;
    float b;

    printf("Enter integer value to decompose it into its digit's place value (enter between 100 - 999): ");
    scanf("%1d%1d%1d", &c1, &c2, &c3);
    printf("\nThe %d is Ones.", c1);
    printf("\nThe %d is Tens.", c2);
    printf("\nThe %d is Hundreds.", c3);

    printf("\nEnter integer value for 'a': ");
    scanf("%d", &a);

    printf("\nEnter float value for 'b': ");
    scanf("%f", &b);

    printf("\nThe integer number's value is %d", a);
    printf("\nThe float number's value is %.2f", b);

    return 0;
}