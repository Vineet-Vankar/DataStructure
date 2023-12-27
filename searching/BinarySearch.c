#include <stdio.h>

int BinarySearch(int arr[], int size, int search){
    int left = 0, right = size-1;
    while(left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == search){
            return mid + 1;
        } else if (arr[mid] > search){
            // Search in left half of array
            right = mid - 1;
        } else {
            // Search in right half of array
            left = mid + 1;
        } 
    }
    return -1;
    
}

int main(){
    // ask the user for size of array
    int size;
    printf("Enter number of elements you want to enter : ");
    scanf("%d", &size);
    
    //enter elements in array
    int arr[size];
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    // for binary search array should be sorted
    // sort array in ascending form
    for(int m=0; m<size-1; m++){
        for(int n=m+1; n<size; n++){
            if(arr[m]>arr[n]){
                int temp;
                temp = arr[m];
                arr[m] = arr[n];
                arr[n] = temp;
            }
        }
    }

    //**display soted array
    printf("Sorted array is : ");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    //take element to search from user
    int search;
    printf("\nEnter the element to Search : ");
    scanf("%d", &search);

    //function call
    int index = BinarySearch(arr, size, search);

    //display result value
    if (index == -1){
        printf("Element is not present in array");
    } else {
        printf("Element is present at %d position", index);
    }
    
    return 0;
}