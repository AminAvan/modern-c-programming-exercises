#include <stdio.h>

int main(void){

    int user_input;
    float user_credit = 0.0f, user_debit = 0.0f, user_balance = 0.0f;

    printf("\n** ACME checkbook-balancing program **\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    for (;;){
        printf("Enter command: ");
        scanf("%d", &user_input);
        switch(user_input){
            case 0:
                user_balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &user_credit);
                user_balance += user_credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &user_debit);
                user_balance -= user_debit;
                break;
            case 3:
                printf("Current balance: %.02f\n", user_balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0=clear, l=credit, 2=debit, 3=balance, 4=exit\n\n");
                break;
        }
    }
    

    return 0;
}