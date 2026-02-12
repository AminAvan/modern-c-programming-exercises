#include <stdio.h>

int main(void){
    int earl_dd, earl_mm, earl_yy, dd_2, mm_2, yy_2, agg_date_1, agg_date_2;

    printf("\nEnter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &earl_dd, &earl_mm, &earl_yy);

    // do {
    for (;;){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm_2, &dd_2, &yy_2);

        agg_date_1 = earl_dd + (earl_mm * 30) + (earl_yy * 365);
        agg_date_2 = dd_2 + (mm_2 * 30) + (yy_2 * 365);

        if ((agg_date_1 == 0) || (agg_date_2 == 0)) {
            break;
        }

        if (agg_date_1 > agg_date_2){
            earl_dd = dd_2;
            earl_mm = mm_2;
            earl_yy = yy_2;
        } else if (agg_date_1 == agg_date_2){
            earl_dd = dd_2;
            earl_mm = mm_2;
            earl_yy = yy_2;
        }
    }
    // } while ((dd_1 == 0 && mm_1 == 0 && yy_1 == 0) || (dd_2 == 0 && mm_2 == 0 && yy_2 == 0));
    printf("%02d/%02d/%02d is the earliest date.", earl_mm, earl_dd, earl_yy);

    return 0;
}