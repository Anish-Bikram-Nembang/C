//program to count blanks, tabs and newlines
#include <stdio.h>

int main(void) {
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        switch(c) {
            case ' ':
                blanks++;
                break;
            case '\t':
                tabs++;
                break;
            case '\n':
                newlines++;
                break;
        }
    }
    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}

