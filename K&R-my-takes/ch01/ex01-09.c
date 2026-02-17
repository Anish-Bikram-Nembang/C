//replace multiple blanks of input with a single blank
#include <stdio.h>
#define IN 1
#define OUT 0;

int main(){
    int c, state = IN;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t') && state == IN) {
            printf(" ");
            state = OUT;
        } else if (c != ' ' && c != '\t') {
            putchar(c);
            state = IN;
            
        }
    }
    return 0;
}
