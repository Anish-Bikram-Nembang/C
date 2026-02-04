#include <stdio.h>
#define NOT_FOUND -1
int binary_search(int *array, int size, int target);
int main(void) {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10, target = 9;
    int result = binary_search(array, size, target);
    if (result == NOT_FOUND) {
        printf("Not found\n");
    } else {
        printf("Found at index %d\n", result);
    }
    return 0;
}

int binary_search(int *array, int size, int target) {
    int high, low, mid;
    high = size - 1;
    low = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (array[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return NOT_FOUND;
}
