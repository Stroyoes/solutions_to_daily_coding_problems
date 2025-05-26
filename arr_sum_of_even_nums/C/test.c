// Test the sum_of_evens 

#include <stdio.h>
#include <stdlib.h>

#include "sum_of_evens.h" 

int main() {
  int N = 11; // Number of elements 
  
  int *arr = (int *)malloc(sizeof(int) * N); // Allocate space for the new array

  if (arr == NULL) {
    printf("\nERROR: Failed allocating memory !\n");
    return -1;
  }

  // Get some elements for a specific range 
  int from = 124, to = 134; //  NOTE: Change this range to try for other numbers 
  for (int i = 0, j = from; i < (to - from) + 1; i++, j++) {
    arr[i] = j;
  }

  int expected_value = 774;

  int result = sum_of_evens(arr, N);

  if (result == expected_value) {
    printf("\nTest passed ! ✔  \nExcpected value: %d , Got: %d \n", expected_value, result);
  } else {
    printf("\nTest failed! ❌ \nExpected value: %d , Got: %d \n", expected_value, result);
  }

  free(arr); // Free the allocated memory 

  return 0;
}
