// Get the sum of even ints from an array of ints 

export function sum_of_evens(nums: number[]): number {
  let sum = 0;

  for (const num of nums) {
    if (num % 2 === 0) {
      sum += num;
    }
  }

  return sum;
}
