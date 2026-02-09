#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dep_1 = (8*60), arv_1 = (10*60)+16,
        dep_2 = (9*60)+43, arv_2 = (11*60)+52,
        dep_3 = (11*60)+19, arv_3 = ((1+12)*60)+31,
        dep_4 = (12*60)+47, arv_4 = ((3+12)*60),
        dep_5 = ((2+12)*60), arv_5 = ((4+12)*60)+8,
        dep_6 = ((3+12)*60)+45, arv_6 = ((5+12)*60)+55,
        dep_7 = ((7+12)*60), arv_7 = ((9+12)*60)+20,
        dep_8 = ((9+12)*60)+45, arv_8 = ((11+12)*60)+58;
    
    int inp_hour, inp_minutes, inp_total, diff_1, diff_2, diff_3, diff_4, diff_5, diff_6, diff_7, diff_8, hour;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &inp_hour, &inp_minutes);

    inp_total = (inp_hour*60) + inp_minutes;
    
    diff_1 = abs(inp_total - dep_1);
    diff_2 = abs(inp_total - dep_2);
    diff_3 = abs(inp_total - dep_3);
    diff_4 = abs(inp_total - dep_4);
    diff_5 = abs(inp_total - dep_5);
    diff_6 = abs(inp_total - dep_6);
    diff_7 = abs(inp_total - dep_7);
    diff_8 = abs(inp_total - dep_8);

    if (diff_1 < diff_2 && diff_1 < diff_3 && diff_1 < diff_4 && diff_1 < diff_5 && diff_1 < diff_6 && diff_1 < diff_7 && diff_1 < diff_8){
        if (dep_1 >= (12 * 60)){
            if (((dep_1/60)-12) == 0){
                hour = (dep_1/60);
            } else {
                hour = ((dep_1/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_1%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_1/60)), (dep_1%60));
        }
        if (arv_1 >= (12 * 60)){
            if (((arv_1/60)-12) == 0){
                hour = (arv_1/60);
            } else {
                hour = ((arv_1/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_1%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_1/60)), (arv_1%60));
        }
    } else if (diff_2 < diff_1 && diff_2 < diff_3 && diff_2 < diff_4 && diff_2 < diff_5 && diff_2 < diff_6 && diff_2 < diff_7 && diff_2 < diff_8){
        if (dep_2 >= (12 * 60)){
            if (((dep_2/60)-12) == 0){
                hour = (dep_2/60);
            } else {
                hour = ((dep_2/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_2%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_2/60)), (dep_2%60));
        }
        if (arv_2 >= (12 * 60)){
            if (((arv_2/60)-12) == 0){
                hour = (arv_2/60);
            } else {
                hour = ((arv_2/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_2%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_2/60)), (arv_2%60));
        }
    } else if (diff_3 < diff_1 && diff_3 < diff_2 && diff_3 < diff_4 && diff_3 < diff_5 && diff_3 < diff_6 && diff_3 < diff_7 && diff_3 < diff_8){
        if (dep_3 >= (12 * 60)){
            if (((dep_3/60)-12) == 0){
                hour = (dep_3/60);
            } else {
                hour = ((dep_3/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_3%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_3/60)), (dep_3%60));
        }
        if (arv_3 >= (12 * 60)){
            if (((arv_3/60)-12) == 0){
                hour = (arv_3/60);
            } else {
                hour = ((arv_3/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_3%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_3/60)), (arv_3%60));
        }
    } else if (diff_4 < diff_1 && diff_4 < diff_2 && diff_4 < diff_3 && diff_4 < diff_5 && diff_4 < diff_6 && diff_4 < diff_7 && diff_4 < diff_8){
        if (dep_4 >= (12 * 60)){
            if (((dep_4/60)-12) == 0){
                hour = (dep_4/60);
            } else {
                hour = ((dep_4/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_4%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_4/60)), (dep_4%60));
        }
        if (arv_4 >= (12 * 60)){
            if (((arv_4/60)-12) == 0){
                hour = (arv_4/60);
            } else {
                hour = ((arv_4/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_4%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_4/60)), (arv_4%60));
        }
    } else if (diff_5 < diff_1 && diff_5 < diff_2 && diff_5 < diff_3 && diff_5 < diff_4 && diff_5 < diff_6 && diff_5 < diff_7 && diff_5 < diff_8){
        if (dep_5 >= (12 * 60)){
            if (((dep_5/60)-12) == 0){
                hour = (dep_5/60);
            } else {
                hour = ((dep_5/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_5%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_5/60)), (dep_5%60));
        }
        if (arv_5 >= (12 * 60)){
            if (((arv_5/60)-12) == 0){
                hour = (arv_5/60);
            } else {
                hour = ((arv_5/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_5%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_5/60)), (arv_5%60));
        }
    } else if (diff_6 < diff_1 && diff_6 < diff_2 && diff_6 < diff_3 && diff_6 < diff_4 && diff_6 < diff_5 && diff_6 < diff_7 && diff_6 < diff_8){
        if (dep_6 >= (12 * 60)){
            if (((dep_6/60)-12) == 0){
                hour = (dep_6/60);
            } else {
                hour = ((dep_6/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_6%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_6/60)), (dep_6%60));
        }
        if (arv_6 >= (12 * 60)){
            if (((arv_6/60)-12) == 0){
                hour = (arv_6/60);
            } else {
                hour = ((arv_6/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_6%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_6/60)), (arv_6%60));
        }
    } else if (diff_7 < diff_1 && diff_7 < diff_2 && diff_7 < diff_3 && diff_7 < diff_4 && diff_7 < diff_5 && diff_7 < diff_6 && diff_7 < diff_8){
        if (dep_7 >= (12 * 60)){
            if (((dep_7/60)-12) == 0){
                hour = (dep_7/60);
            } else {
                hour = ((dep_7/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_7%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_7/60)), (dep_7%60));
        }
        if (arv_7 >= (12 * 60)){
            if (((arv_7/60)-12) == 0){
                hour = (arv_7/60);
            } else {
                hour = ((arv_7/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_7%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_7/60)), (arv_7%60));
        }
    } else if (diff_8 < diff_1 && diff_8 < diff_2 && diff_8 < diff_3 && diff_8 < diff_4 && diff_8 < diff_5 && diff_8 < diff_6 && diff_8 < diff_7){
        if (dep_8 >= (12 * 60)){
            if (((dep_8/60)-12) == 0){
                hour = (dep_8/60);
            } else {
                hour = ((dep_8/60)-12);
            }
            printf("Closet departure is %02d:%02d PM", hour, (dep_8%60));
        } else {
            printf("Closet departure is %02d:%02d AM", ((dep_8/60)), (dep_8%60));
        }
        if (arv_8 >= (12 * 60)){
            if (((arv_8/60)-12) == 0){
                hour = (arv_8/60);
            } else {
                hour = ((arv_8/60)-12);
            }
            printf(", arriving at %02d:%02d PM.", hour, (arv_8%60));
        } else {
            printf(", arriving at %02d:%02d AM.", ((arv_8/60)), (arv_8%60));
        }
    }



    return 0;
}