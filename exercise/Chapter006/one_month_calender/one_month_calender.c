#include <stdio.h>

int main(void){
    int days_of_month, start_day;

    printf("\nEnter number of days in month: ");
    scanf("%d", &days_of_month);

    // 1=Sun, 2=Mon, 3=Tue, 4=Wed, 5=Thu, 6=Fri, 7=Sat
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    
    int j = 1;

    for (j ; j < start_day; j++){
        printf("    ");
    }

    for (int i = 1; i <= days_of_month; i++, j++){
        if ( j % 7 == 0){
            printf(" %2d\n", i);
            j = 0;
        } else {
            printf(" %2d ", i);
        }
    }

    return 0;
}