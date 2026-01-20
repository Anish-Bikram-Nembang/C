#include <stdio.h>
#define STRLEN 1000

int main(void){
    char str[STRLEN];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int blank_count = 0, tab_count = 0, newline_count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        switch(str[i]){
            case ' ':
                blank_count++;
                break;
            case '\t':
                tab_count++;
                break;
            case '\n':
                newline_count++;
            decault:
                break;
        };
    printf("blanks: %d\ntabs: %d\nnewlines: %d \n", blank_count, tab_count, newline_count);
    return 0;
}
