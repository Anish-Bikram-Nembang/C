//program to print a histogram of the lengths of words in it's input

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX 30

int find_highest(int *array, int size) {
    int highest = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] > highest) 
            highest = array[i];
    return highest;
}
int main(void) {
    int c, character_count = 0, state = OUT;
    int words_of_length[MAX] = {0};
    int highest_no_of_characters = 0;
    while (((c = getchar()) != EOF )) {
        if ((c == ' ' || c == '\t' || c == '\n') && state == IN) {
            state = OUT;
            if (character_count >= MAX)
                character_count = MAX - 1;
            if (character_count > highest_no_of_characters)
                highest_no_of_characters = character_count;
            words_of_length[character_count]++;
            character_count = 0;
        }
        if (c != ' ' && c != '\t' && c != '\n') {
            state = IN;
            character_count++;
        }
    }
    if (state == IN) {
        if (character_count >= MAX)
            character_count = MAX - 1;
        if (character_count > highest_no_of_characters)
            highest_no_of_characters = character_count;
        words_of_length[character_count]++;
    }

    int max_frequency = find_highest(words_of_length, highest_no_of_characters + 1);
    printf("\n");
    for (int i = max_frequency; i >= 1; i--) {
        printf("%4d |", i);
        for (int j = 1; j <= highest_no_of_characters; j++)
            if (words_of_length[j] >= i)
                printf(" * ");
            else
                printf("   ");
        printf("\n");
    }
    printf(" f/l |");
    for (int i = 1; i <= highest_no_of_characters; i++)
        if (i < 10)
            printf(" %d ", i);
        else 
            printf(" %d", i);
    printf("\n");
    return 0;

}


