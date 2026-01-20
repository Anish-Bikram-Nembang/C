/* program that replaces multiple blanks in a string with a single blank */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 1000
int main(void){
    char str[MAXLEN], newstr[MAXLEN];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    bool was_blank = false;
    for (int i = 0; str[i] != '\0'; i++){
        if((str[i] == ' ' || str[i] == '\t') && was_blank == false){
            if(str[i] == '\t'){
                newstr[j++] = ' ';
            }else{
                newstr[j++] = str[i];
            }
            was_blank = true;
        }else if(str[i] != ' ' && str[i] != '\t'){
            newstr[j++] = str[i];
            was_blank = false;
        }
    }
    newstr[strcspn(newstr, "\n")] = '\0';
    printf("%s\n", newstr);
    return 0;
}
            


