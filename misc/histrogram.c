#include <stdio.h>
#define MAX 1000
 
char* longest_line(void);
char string[MAX];

int main(void){
    printf("Enter a paragraph:");
    scanf("%s", string);
    printf("%s\n", longest_line());
    return 0;
}


char* longest_line(void){
    int i = 0;
    while(string[i++] != '\0'){
        

