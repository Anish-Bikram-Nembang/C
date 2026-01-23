#include <stdio.h>

int binary_search(int *numbers, int size, int item);

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int item;
    printf("Which number do you want to find?(1 to 10): ");
    scanf("%d", &item);
    int result = binary_search(numbers, size, item);
    if (result != -1) {
        printf("Found at %dth index!:)\n", result);
    } else {
        printf("Not found!:(\n");
    }
    return 0;
}


int binary_search(int *numbers, int size, int item) {
    int low, high, mid, guess;
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        guess = numbers[mid];
        if (guess == item ) {
            return mid;
        } else if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
