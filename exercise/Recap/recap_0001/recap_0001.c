#include <stdio.h>

#define KG_TO_POUND 2.20

int main(void){
    int dd, mm, yyyy;
    int a, c1, c2, c3;
    float b;

    printf("Enter integer value to decompose it into its digit's place value (enter between 100 - 999): ");
    scanf("%1d%1d%1d", &c1, &c2, &c3);
    printf("\nThe %d is Ones.", c1);
    printf("\nThe %d is Tens.", c2);
    printf("\nThe %d is Hundreds.", c3);

    printf("\nEnter weight value in kg: ");
    scanf("%d", &a);

    b = a * KG_TO_POUND;
    printf("The weight of %d in Kilogram is equal to %.2f in Pound.", a, b);

    printf("\nEnter date in format of day/month/year: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    printf("\nDate is %02d/%02d/%04d: ", dd, mm, yyyy);

    return 0;
}