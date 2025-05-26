// Just test the sum of evens function 

import assert from 'assert/strict';
import { sum_of_evens } from './sum_of_evens.js';

const arr = Array.from({ length: 11 }, (_, i) => 124 + i);

assert.strictEqual(sum_of_evens(arr), 774, 'Failed test cases! ❌');

console.log('All tests passed! ✔  ');
