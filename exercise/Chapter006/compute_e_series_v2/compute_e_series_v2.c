#include <stdio.h>

int main(void){
    float e_val = 0.0f, i_factoriel = 1.0f, eps_val = 0.0f;


    printf("\nEnter value of 'eps': ");
    scanf("%f", &eps_val);

    int i = 0;

    while (eps_val < (1/i_factoriel)){
        i_factoriel = 1;
        for (int j = i; j >= 1; j--){
            i_factoriel *= j;
        }

        // each term: (1/i_factoriel) ;
        e_val += (1/i_factoriel);
        i++;
    }

    printf("Based on entered 'eps' = %g, the value of 'e' is: %g", eps_val, e_val);
    
    return 0;
}