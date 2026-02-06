#include <stdio.h>

int main(void){
    int hours, minutes, new_hours, new_minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12){
        new_hours = hours - 12;
        new_minutes = minutes;
        printf("Equivalent 12-hour time: %02d:%02d PM", new_hours, new_minutes);
    } else if (hours == 12){
        new_hours = hours;
        new_minutes = minutes;
        printf("Equivalent 12-hour time: %02d:%02d PM", new_hours, new_minutes);
    } else if (hours < 12){
        new_hours = hours;
        new_minutes = minutes;
        printf("Equivalent 12-hour time: %02d:%02d AM", new_hours, new_minutes);
    }

    return 0;
}