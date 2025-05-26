/**
 * Sum of even numbers from an array of integers 
 * @param { number[] } nums 
 * @param { number }
 */

export function sum_of_evens(nums) {
  let sum = 0;

  for (let num of nums) {
    if (num % 2 === 0) {
      sum += num;
    }
  }

  return sum;
}
