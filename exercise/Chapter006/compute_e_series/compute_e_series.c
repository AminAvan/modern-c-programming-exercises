#include <stdio.h>

int main(void){
    int n;
    float e_val = 0.0f, i_factoriel = 1.0f;


    printf("\nEnter value of 'n': ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = i; j >= 1; j--){
            i_factoriel *= j;
        }

        e_val += (1/i_factoriel);
        i_factoriel = 1;
    }

    printf("Based on entered 'n' = %d, the value of 'e' is: %.3f", n, e_val);
    
    return 0;
}