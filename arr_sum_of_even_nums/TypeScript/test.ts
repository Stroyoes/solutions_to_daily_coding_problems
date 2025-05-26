// Run test on the function 

import { sum_of_evens } from './sum_of_evens.ts'; 

// Use the deno itself to run tests 

Deno.test("sum_of_evens should return correct result", () => {
  const arr: number[] = Array.from({ length: 11 }, (_, i) => 124 + i);
  const result = sum_of_evens(arr);
  if (result !== 774) {
    throw new Error(`Failed test: Expected 774, but got ${result}`);
  }
});
