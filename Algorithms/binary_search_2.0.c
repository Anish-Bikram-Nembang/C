//Binary search using reecursion
#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1

typedef struct{
    int *nums;
    int size;
    int high;
    int low;
    int target;
}desc;

int binary_search(desc *array);
void sort(desc *array);
int find_smallest(desc *array, int i);

int main(void) {
    desc array;
    printf("Enter the number of elements: ");
    scanf("%d", &array.size);
    if ((array.nums = malloc(sizeof(int) * array.size)) == NULL) {
        printf("ERROR!\n");
    }

    for (int i = 0; i < array.size; i++) {
        printf("Enter a number: ");
        scanf("%d", &array.nums[i]);
    }
    printf("Enter the element to find: \n");
    scanf("%d", &array.target);
    sort(&array);
    array.low = 0;
    array.high = array.size - 1;
    int result = binary_search(&array);
    if (result == NOT_FOUND) {
        printf("Not found\n");
    } else {
        printf("Found!\n");
    }
    free(array.nums);
    return 0;
}

int binary_search(desc *array) {
    int mid = array->low + (array->high - array->low) / 2;
    if (array->low > array->high) {
        return NOT_FOUND;
    }
    if (array->nums[mid] == array->target) {
        return mid;
    } else if (array->nums[mid] > array->target){
        array->high = mid - 1;
        return binary_search(array);
    } else {
        array->low = mid + 1;
        return binary_search(array);
    }
}

int find_smallest(desc *array, int i) {
    int smallest = array->nums[i];
    int smallest_index =  i ;
    for(; i < array->size; i++) {
        if(array->nums[i] < smallest) {
            smallest = array->nums[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

void sort(desc *array) {
    int index, tmp;
    for(int i = 0; i < array->size; i++) {
        index = find_smallest(array, i);
        tmp = array->nums[i];
        array->nums[i] = array->nums[index];
        array->nums[index] = tmp;
    }
}


    

