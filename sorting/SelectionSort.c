#include <stdio.h>

// perform the selection sort
void SelectionSort(int array[], int size) {
    
  // loop to access each array element
  for (int i = 0; i < size - 1; i++) {
      int min = i;
    // loop to compare array elements
    for (int j = i+1; j < size ; j++) {
      
      // compare to find minimum value element
      if (array[min] > array[j]) {
        
        min = j;
        
      }
    }
     // swap the elements
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
  }
}

int main() {
  int data[] = {-1, 45, 0, 11, -2, 11,18};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  printf("Unsorted Array:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
  
  SelectionSort(data, size);
  
  printf("\nSorted Array in Ascending Order:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
  
}