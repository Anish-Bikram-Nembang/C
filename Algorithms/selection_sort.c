#include <stdio.h>
int find_smallest(int *arr, int i, int length);
void selection_sort(int *arr, int length);
int main (void) {
    int n;
    printf("Enter no. of elements you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    printf("The array is sorted:\n");
    for (int j = 0; j < n; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}
int find_smallest (int *arr, int i, int length) {
    int smallest = arr[i];
    int smallest_index = i;
    for (; i < length; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

 void selection_sort (int *arr, int length) {
    int index, tmp;
    for (int i = 0; i < length; i++) {
        index = find_smallest(arr, i, length);
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
}









