//To print one word per line

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define IN 1
#define OUT 0
#define MAX_LEN 1000

int main(void){
    char str[MAX_LEN];
    bool state = OUT;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] == ' ' || str[i] == '\t') && state == IN) {
            state = OUT;
            printf("\n");
        } else if (state == OUT && (str[i] != ' ' && str[i] != '\t')) {
            state = IN;
        }
        if (state == IN) {
            printf("%c", str[i]);
        }
        i++;

    }
    printf("\n");

    return 0;
}
            




