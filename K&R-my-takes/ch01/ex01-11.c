//question: how would you test this word count program example, 
//what kind of inputs are likely to uncover bugs?

//answer: I found out the program doesn't count the last line 
#include <stdio.h>

#define IN 1
#define OUT 0
int main(void) {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("\n%d %d %d\n", nl, nw, nc);
    return 0;
}
