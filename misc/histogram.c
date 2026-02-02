#include <stdio.h>
#define MAX 1000
#define IN 1
#define OUT 0

int find_highest(int *nums, int size);
int main(void){
    int c, wc = 0;
    int state = OUT;
    int i = 0;
    int character_count[MAX];
    character_count[0] = 0;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\n' || c == '\t') && state == IN) {
            character_count[++i] = 0;
            state = OUT;
        }else if (state == OUT && (c != ' ' && c != '\n' && c != '\t')) {
            state = IN;
            wc++;
        }
        if (state == IN) {
            character_count[i]++;
        }
    }
    printf("\n ");
    for (int j = 1; j <= 25; j++)
        printf("%d", j);
    printf("\n");
    
    int highest = find_highest(character_count, i + 1);
    for (int k = highest; k > 0; k--) {
        printf("%d", k);
        for (int l = 0; l <= i; l++)
            if (character_count[l] == k) 
                printf("-");
        printf("\n");
    }
    printf("\n");
    return 0;
}
        

int find_highest(int *nums, int size) {
    int highest = nums[0];
    for (int i = 0; i < size; i++) 
        if (nums[i] > highest)
            highest = nums[i];
    return highest;
}
