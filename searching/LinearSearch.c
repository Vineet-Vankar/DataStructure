#include <stdio.h>

// Linear Search function to seach element in array
int LinearSearch(int arr[], int size, int search){
    for (int i=0; i<size; i++){
        // checing condition
        if (arr[i] == search){
            return i+1;
        }
    }
    return -1;
}
int main() {
    // ask the user for size of array
    int size;
    printf("Enter number of elements you want to enter : ");
    scanf("%d", &size);
    
    //enter elements in array
    int arr[size];
    for (int i=0; i<size; i++){
        printf("Enter element at position %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // display elements of array
    printf("\nElements in array : \n");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    //take element to search from user
    int search;
    printf("\nEnter the element to Search : ");
    scanf("%d", &search);
    
    // function calling
    int index = LinearSearch(arr, size, search);
    
    //printing result based on value returned by function 
    if(index == -1){
        printf("\nElement not found");
    } else {
        printf("\nElement is present at position %d", index);
    }
    return 0;
}