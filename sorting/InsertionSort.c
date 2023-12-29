#include <stdio.h>

// Insertion Sort
void insertionsort(int arr[], int size);

int main() {
    int data[] = {9, 2, 5, 4, 0, 9, -2, 21, -12};
    
    //find size of array
    int size = sizeof(data) / sizeof(data[0]);
    
    //display unsorted array
    printf("Unsorted array:\n");
    for(int i=0; i<size; i++){
        printf("%d ", data[i]);
    }
    
    //function call
    insertionsort(data, size);
    
    //display sorted array
    printf("\nSorted array in Ascending Order:\n");
    for(int i=0; i<size; i++){
        printf("%d ", data[i]);
    }

    return 0;
}

void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i - 1;
        
        //compare key value with the left part of array
        while(arr[j] > key && j>=0){
            
            //if left element is greater then key, shift it to right
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}