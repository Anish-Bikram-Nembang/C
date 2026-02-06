#include <stdio.h>

void swap(int *a, int *b);
int partition(int *array, int low, int high);
void quick_sort(int *array, int low, int high);

int main(void) { 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }
    quick_sort(array, 0, n - 1);
    printf("The array is sorted as:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
void swap(int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
        if (array[j] <= pivot) {
            i++;
            swap(&array[j], &array[i]);
        }
    swap(&array[i + 1], &array[high]);
    return i + 1;
}

void quick_sort(int *array, int low, int high) {
    if (low < high) {
        int pivot_index = partition(array, low, high);
        quick_sort(array, low, pivot_index - 1);
        quick_sort(array, pivot_index + 1, high);
    }
}
