#include <stdio.h>

int main(void){
    int inp_1, inp_2, inp_3, inp_4, min, max;
    min = 2147483647;
    max = 0;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &inp_1, &inp_2, &inp_3, &inp_4);

    if (min < inp_1){
        min = inp_1;
    } else if (min < inp_2){
        min = inp_2;
    }  else if (min < inp_3){
        min = inp_3;
    } else if (min < inp_4){
        min = inp_4;
    }

    if (max > inp_1){
        max = inp_1;
    } else if (max > inp_2){
        max = inp_2;
    }  else if (max > inp_3){
        max = inp_3;
    } else if (max > inp_4){
        max = inp_4;
    }

    if ((min == 2147483647 && max == 0)){

    }

    printf("%d, %d, %d, %d.\n", inp_1, inp_2, inp_3, inp_4);

    return 0;
}