#include <stdio.h>

int find_largest(int *array, int length);
void sort(int *array, int length);

int main(void) {
    int n;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element:");
        scanf("%d", &array[i]);
    }
    sort(array, n);
    printf("Array is sorted as:\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", array[i]);
    return 0;
}



void sort(int *array, int length) {
    int largest, tmp;
    for (int i = 0; i < length; i++) {
       largest = find_largest(array, length - i);
       tmp = array[largest];
       array[largest] = array[length - (i + 1)];
       array[length - (i + 1)] = tmp;
    }
    return;
}



int find_largest(int *array, int length) {
    int largest = array[0];
    int largest_index = 0;
    for (int i = 1; i < length; i++) {
        if (array[i] > largest) {
            largest = array[i];
            largest_index = i;
        }
    }
    return largest_index;
}

