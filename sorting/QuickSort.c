#include<stdio.h>

//swap function
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//partition function
int partition(int arr[], int low, int high) {
    
    // taking last element as pivot
    int pivot = arr[high];
    int i = low;
    
    for(int j=low; j<high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i] ,&arr[j]);
            // to know elements swaped in the process
            // printf("arr[%d]=%d , arr[%d]=%d \n", i,arr[i], j,arr[j]);
            i++;
        }
    }
    // give pivot it's correct position
    swap(&arr[i], &arr[high]);
    return i;
}

//quicksort function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // pi is index where pivot is located
        int pi = partition(arr, low, high);
        
        //repeat same process for sub-arrays around last pivot
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

//printarray function
void printarray(int arr[], int size) {
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//main code
int main() {
    int arr[] = {23, 1, 1, 0, 45, 78, 2, 98, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    //print unsorted array
    printf("Unsorted array:\n");
    printarray(arr, size);
    
    //function call
    quicksort(arr, 0, size-1);
    
    //print sorted array
    printf("Sorted array:\n");
    printarray(arr, size);
}