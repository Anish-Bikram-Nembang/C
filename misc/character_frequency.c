#include <stdio.h>
#include <string.h>
int find_highest(int *nums, int size);
int main(void) {
    int c, frequency[26] = {0};
    while ((c = getchar()) != EOF) {
        if (c <= 90 && c >= 65) {
            frequency[c - 'A']++;
        } else if (c <= 122 && c >= 97) {
            frequency[c - 'a']++;
        }
    }
    printf("\n");
    int printed, length;
    int max = find_highest(frequency, 26);
    char max_str[20], str[20];
    snprintf(max_str, sizeof(max_str), "%d", max);
    int max_length = strlen(max_str);
    for (int i = max; i >=0; i--) {
        snprintf(str, sizeof(str), "%d", i);
        length = strlen(str);
        for(int digit_count = 0; digit_count < (max_length - length); digit_count++)
            printf(" ");
        printf("%d |", i);
        printed = 0;
        for (int j = 0; j < 26; j++) {
            if (frequency[j] >= i && i != 0) {
                for (int k = 0; k < (j - printed); k++){ 
                    printf("  ");
                }
                printf(" *");
                printed = j + 1;
            }
        }
        if (i == 0) {
            for(int character = 97; character <= 122; character++)
                printf(" %c", character);
        }
        printf("\n");
    }
    return 0;
}
int find_highest(int *nums, int size) {
    int highest = nums[0];
    for (int i = 0; i < size; i++)
        if (nums[i] > highest)
            highest = nums[i];
    return highest;
}
