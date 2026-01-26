#include <stdio.h>

int main(void){
    int item_num, dd, mm, yyyy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("Item\t\tUnit Price\t\tPurchase Date\n");
    printf("%d\t\t$%7.2f\t\t%02d/%02d/%04d", item_num, unit_price, dd, mm, yyyy);

    // printf("Item\tUnit\tPurchase\n");
    // printf("\tPrice\tDate\n");
    // printf("%d\t$%7.2f\t%02d/%02d/%d\n", item_num, unit_price, mm, dd, yyyy);

    return 0;
}