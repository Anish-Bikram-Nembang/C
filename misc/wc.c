#include <stdio.h>

int main(void){
    char str[100];
    int wc = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == ' ')
            wc++;
    printf("%d\n", wc);
    return 0;
}
