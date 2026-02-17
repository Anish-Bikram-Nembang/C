#include <stdio.h>

int main(void) {
    int c = getchar() != EOF;
    printf("%d\n", c);
    //"c" is 0 when EOF (signalled by CTRL-D) and 1 when anything else
    return 0;
}
