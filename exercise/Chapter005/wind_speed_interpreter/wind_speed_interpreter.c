#include <stdio.h>

int main(void){
    int wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);

    printf("The description for the wind speed %d is ", wind_speed);
    if (1 <= wind_speed && wind_speed <= 3){
        printf("Calm.\n");
    } else if (4 <= wind_speed && wind_speed <= 27){
        printf("Light Air.\n");
    } else if (28 <= wind_speed && wind_speed <= 47){
        printf("Gale.\n");
    } else if (48 <= wind_speed && wind_speed <= 63){
        printf("Storm! Be careful!\n");
    }  else if (wind_speed > 63){
        printf("Hurricane! Stay indoors! Go to a small interior room! Do not use electrical appliances!\n");
    }

    return 0;
}