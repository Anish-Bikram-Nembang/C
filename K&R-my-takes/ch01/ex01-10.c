//program that coppies input to output, replacing each tab by \t, each backspace by \b and each backslash by \\

#include <stdio.h>
int main() {
    int c;
    while ((c = getchar()) != EOF)
        switch (c) {
            case '\t': 
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);
                break;
        }
    return 0;
}

