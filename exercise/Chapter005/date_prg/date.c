/*
A program that gives a official and formal date based on user input.
*/

#include <stdio.h>

int main(){
    int dd, mm, yy;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("Dated this %d", dd);
    switch (dd){
        case 1: case 21: case 31:
            printf("st"); break;
        case 2: case 22:
            printf("nd"); break;
        default: printf("th"); break;
    }
    printf(" day of ", mm);
    switch(mm){
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(", 20%d.", yy);
    return 0;
}