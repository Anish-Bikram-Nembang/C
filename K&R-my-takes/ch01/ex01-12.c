//program that prints it's input one word per line

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
    int c, state = OUT;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t') && state == IN) {
            state = OUT;
            printf("\n");
        }
        if (c != ' ' && c != '\t') {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}
