#include <stdio.h>
#define NOT_FOUND -1

int find(int *array, int target, int low, int high);
int main(void) {
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int target = 11;
    int result = find(numbers, target, 0, 15);
    if (result == NOT_FOUND) {
        printf("Not found\n");
    } else {
        printf("Found at index %d\n", result);
    }
    return 0;
}
int find(int *array, int target, int low, int high) {
    if (low > high) {
        return NOT_FOUND;
    }
    int mid = low + (high - low) / 2;
    if (array[mid] == target) {
        return mid;
    } else if (array[mid] > target) {
        return find(array, target, low, mid - 1);
    } else {
        return find(array, target, mid + 1, high);
    }
}
