# Approach used for array problems - easy level

1. running_sum_of_1d_array (leetcode-1480)
approach: use prefix sum
tips: reserve vector size ahead of time, and if allowed to, don't create a new array and just modify the parameter passed in

2. find_pivot_index (leetcode-724) 
approach: use prefix sum with precalculated sum
tips: remember that total sum is made of 3 components (left sum + right sum + current element) 

3. best_time_to_buy_and_sell_stock (leetcode-121)
approach: initialize min buy price as first price value and max profit as 0, loop through each price and (i)calculate profit using current price and min buy price, update max profit if current profit is more than max profit; (ii)update min buy price if current price is lower than min buy price
tips: None

4. max_consecutive_ones (leetcode-485)
approach: loop through the array, on encountering ones - keep incrementing a running sum, on encountering a zero - update the MaxConsecutiveOnes variable and also reset the running sum to 0; at the end return the max among latest running sum and MaxConsectiveOnes
tips: None

5. find (leetcode-1295)
approach: loop through each element, find no. of digits using 1+log10, check for evenness and increment counter
tips: None

6. squares_of_a_sorted_array (leetcode-977)
approach: use two pointers, one for the negative and one for the positive group, and fill the result by comparing both, and move the pointers
tips: rather than starting from in-between, start from the ends to avoid checking and handling of ends twice

7. duplicate_zeros (leetcode-1089)
//TODO


8. average_salary_excluding_the_minimum_and_maximum_salary (leetcode-1089)
approach: loop through each element, keep updating min and max salary, along with a cumulative sum, once end of loop is reached, calculate average by removing the min and max from both numerator and denominator
tips: None

9. move_zeroes (leetcode-238)
approach: traverse the array counting no. of zeroes, and whenever a non-zero number is encountered copy it to x places backward, where x is the no. of zeroes encountered so far
tips: None

10. remove_element (leetcode-27)
approach: have 2 pointers, one traversing fast - one element at a time and checking if it matches the val to be removed, the second one slow, moving only when the element is not equal to the val, whenever element is same as val, it stays back at same place, waiting to copy the next valid element from the fast pointer
tips: to save unnecessary copies when there are very few matches, one can also use make use of the requirement that the elements need not be in order, by just swapping with last element every time there is a match (partial swap is sufficient, since only earlier left side element is important, the later right side element can be ignored), and moving ahead only when there is no match with the val in question - the last few elements can be left untouched since they are not needed

11. remove_duplicates_from_sorted_array (leetcode-26)
approach: use two pointers, one which moves along with array and checks for duplicates, and second one which stays back to copy the elements to the indices where duplicates are present
tips: None

12. check_if_n_and_its_double_exist (leetcode-1346)
approach: (i)do a linear search for 2x & 0.5x for each element, or (ii)sort array first and then do a binary search for each element; (iii) use a set and search in the set
tips: beware of corner case when element is 0, since 2x and 0.5x of 0 is 0

13. valid_mountain_array (leetcode-941)
approach: keep ascending till a peak or end of array is reached, consider invalid if peak is at extreme end - index 0 or last index, then keep descending till the descending pattern is broken
tips: beware of peak being at either ends of the array

14. replace_elements_with_greatest_element_on_right_side (leetcode-1299)
approach: iterate through each element starting from right end and check for max (new greater element on immediate right, old element on immediate right), repeat till first element on left end is reached
tips: do not forget to handle extreme end corner case with respective initialization

15. sort_array_by_parity (leetcode-905)
approach: use two pointers, one read and another write, read moves and checks for first odd number found and pulls write to this place, then continues ahead to an even number that can be swapped where write is placed, after swapping both move a step ahead; this continues till read ptr reaches end of array
tips: use two pointers starting from both ends and moving towards centre till they cross, move both pointers based on even, odd and swap where required, similar to quick sort pattern