#include <stdio.h>

int main(void){
    int dd_1, mm_1, yy_1, dd_2, mm_2, yy_2, agg_date_1, agg_date_2;

    printf("\nEnter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm_1, &dd_1, &yy_1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm_2, &dd_2, &yy_2);

    agg_date_1 = dd_1 + (mm_1 * 30) + (yy_1 * 365);
    agg_date_2 = dd_2 + (mm_2 * 30) + (yy_2 * 365);

    if (agg_date_1 < agg_date_2){
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d.", mm_1, dd_1, yy_1, mm_2, dd_2, yy_2);
    } else if (agg_date_1 > agg_date_2){
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d.", mm_2, dd_2, yy_2, mm_1, dd_1, yy_1);
    } else if (agg_date_1 == agg_date_2){
        printf("The provided dates are same!");
    } else {
        printf("The inputs are in-valid!");
    }

    return 0;
}