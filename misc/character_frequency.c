#include <stdio.h>
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
    int printed;
    int max = find_highest(frequency, 26);
    for (int i = max; i >=0; i--) {
        printf("%2d |", i);
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
