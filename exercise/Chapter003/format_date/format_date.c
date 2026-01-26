/*
Read the date from user withing format of " mm/dd/yyyy ". However, print the date in format of " yyyymmdd ".
*/

#include <stdio.h>

int main(void){
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %4.4d%2.2d%2.2d", year, month, day);

    return 0;
}