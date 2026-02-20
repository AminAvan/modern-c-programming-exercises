#include <stdio.h>

int main(void){
    char ch, l_ch;
    int j;

    j = 'a'; /* i is now 97 */
    ch = 65; /* ch is now 'A' */
    printf("\n");

    for (int i = 0; i <= 25; i++){
        printf("value of ch: %c\n", ch);
        if ('A' <= ch && ch <= 'Z'){
            l_ch = ch + 32;
            printf("ch with lower-case value: %c\n", l_ch);
        }
        ch = ch + 1;
    }

    return 0;
}