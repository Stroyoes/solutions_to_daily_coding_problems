// From list of integers get sum of even numbers 

#include "sum_of_evens.h"

int sum_of_evens(int *nums, int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    if (nums[i] % 2 == 0) {
      // Get sum if its an even number 
      sum += nums[i];
    }
  }

  return  sum;
}
