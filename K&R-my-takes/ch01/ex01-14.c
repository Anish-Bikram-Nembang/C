#include <stdio.h>
#define IN 1
#define OUT 0

int highest(int *array, int size){
    int highest = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] > highest)
            highest = array[i];
    return highest;
}

int main(void) {
    int c, state = OUT;
    int frequency[26] = {0};
    while ((c = getchar()) != EOF) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            state = IN;
            if (c < 97)
                frequency[c - 'A']++;
            else
                frequency[c - 'a']++;
        }
    }
    int max_frequency = highest(frequency, 26);
    printf("\n");
    for (int i = max_frequency; i > 0; i--) {
        printf("%4d |", i);
        for (int j = 0; j < 25; j++)
            if (frequency[j] >= i)
                printf(" * ");
            else
                printf("   ");
        printf("\n");
    }
    printf("     |");
    for (int i = 97; i <= 122; i++)
        printf(" %c ", i);
    printf("\n");
    return 0;
}
