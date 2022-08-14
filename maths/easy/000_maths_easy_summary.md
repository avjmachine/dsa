# Approach used for linked list problems - easy level

1. count_odd_numbers_in_an_interval_range (leetcode-152)
approach:  use the observation that difference betn 2 odd nos. is half the range + 1, when bounds are even, take the next relevant odd no. within the range; can also use the fact that no. of odd nos. between end and start = floor((end-start)/2) + (1 if either or both start/end are odd)  
tips: none

2. no_of_steps_to_reduce_a_number_to_zero (leetcode-1342)
approach: count no. of steps to divide by 2, this is same as log2(n) and add count of no. of odd numbers encountered, this is same as no. of set bits
tips: use built-in functions to count set bits and get the no. of steps to divide by 2, this would be faster than simulating step by step and incrementing counter

3. largest_perimeter_triangle (leetcode-976)
approach: sort the array, take the max 3 values and check if they meet the triangle inequality theorem criteria, if not, take the next 3 values and keep continuing till you reach the min 3 values
tips: none