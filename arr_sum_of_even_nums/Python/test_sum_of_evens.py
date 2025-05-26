# Testing the sum of evens function 

from sum_of_evens import Solution  
sol = Solution()

some_list = [x for x in range(124, 135)]

def test_sum_of_evens():
    actual = sol.sum_of_evens(some_list)
    expected = 774

    assert actual == expected, f"Test failed! ❌ (as {actual} != {expected}) "
    
    print(f"\nSUCCESS: test_sum_of_evens - Sum of evens in {some_list} is {actual} as expected ({expected}) ✔  ")

