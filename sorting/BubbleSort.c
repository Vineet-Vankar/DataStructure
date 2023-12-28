#include <stdio.h>

// Bubble sort
/* adjacent elements are compared and swap if required*/
void BubbleSort(int array[], int size) {

  // loop to access each array element
  for (int i = 0; i < size - 1; i++) {
      
    // loop to compare array elements
    for (int j = 0; j < size - i - 1; j++) {
      
      // compare two adjacent elements
      if (array[j] > array[j + 1]) {
        
        // swap the elements
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  int data[5] = {-1, 45, 0, 11, -2};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  printf("Unsorted Array:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
  
  BubbleSort(data, size);
  
  printf("\nSorted Array in Ascending Order:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
}