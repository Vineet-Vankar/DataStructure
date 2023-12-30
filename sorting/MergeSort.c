#include <stdio.h>

//merge function
void Merge(int arr[], int low, int mid, int high){
    int m1 = mid - low + 1;
    int m2 = high - mid;
    
    //temporary sub-arrays
    int LeftArray[m1], RightArray[m2];
    
    //data insertion in sub-arrays
    for(int i=0; i<m1; i++)
    {
        LeftArray[i] = arr[low + i];
    }
    for(int j=0; j<m2; j++)
    {
        RightArray[j] = arr[mid + 1 +j];
    }
    
    int i = 0, j = 0; //index for both sub-arrays
    int k = low; //index for merge array
    
    //insertion comparision condition
    while (i<m1 && j<m2) 
    {
        if ( LeftArray[i] <= RightArray[j] ) 
        {
            arr[k] = LeftArray[i];
            i++;
            k++;
        } 
        else {
            arr[k] = RightArray[j];
            j++;
            k++;
        }
    }
    
    //if elements are present in left array
    while (i < m1) {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    
    //if elements are present in right array
    while ( j < m2 ) {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

//mergesort function
void Mergesort(int arr[], int low, int high){
    if (low < high) 
    {
        int mid = (low + high) / 2;
        //recursively break the array in small sub-arrays
        Mergesort(arr, low, mid);
        Mergesort(arr, mid+1, high);
        
        //merge sub-arrays
        Merge(arr, low, mid, high);
    }
}

//arrayprint function
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {23, 1, 0, 45, 78, 23, 5, 98};
    int size = (sizeof(arr) / sizeof(int));
    
    //display unsorted array
    printf("Unsoted array:\n");
    printarray(arr, size);
    
    //function call for sorting
    Mergesort(arr, 0, size - 1);

    //display sorted array
    printf("Sorted array in Ascending order:\n");
    printarray(arr, size);

    return 0;
}