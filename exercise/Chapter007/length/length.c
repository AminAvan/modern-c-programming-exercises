/*
A program that counts the character of the input except blank-space.
*/

#include<stdio.h>

int main(void){
    int num_char = 0;
    char ch;

    printf("\nEnter a message: ");
    while ((ch = getchar() ) != '\n'){
            if(ch != ' '){
                num_char += 1;
            }
    }
    printf("Your message was %d character(s) long.", num_char);

    return 0;
}