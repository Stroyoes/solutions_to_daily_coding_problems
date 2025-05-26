# Get sum of even ints from a list of ints 

from typing import List 

# Leetcode style  

class Solution:
    def sum_of_evens(self, nums: List[int]) -> int:
        sum_of_even_ints = 0

        for num in nums:
            if (num % 2) == 0:
                sum_of_even_ints += num
        return sum_of_even_ints


