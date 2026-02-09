#include <stdio.h>

int main(void){
    int grade;
    
    printf("\nEnter numerical grade: ");
    scanf("%d", &grade);

    grade = (grade / 10);

    if ((grade > 100) && (grade < 0)){
        printf("Entered grade is in-valid!");
    } else {
        printf("Letter grade: ");
        switch (grade){
        case 10: printf("A"); break;
        case 9:  printf("A"); break;
        case 8:  printf("B"); break;
        case 7:  printf("C"); break;
        case 6:  printf("D"); break;
        case 5:  printf("F"); break;
        case 4:  printf("F"); break;
        case 3:  printf("F"); break;
        case 2:  printf("F"); break;
        case 1:  printf("F"); break;
        case 0:  printf("F"); break;
        default: printf("Entered number is in-valid!"); break;
        }
    }  

    return 0;
}