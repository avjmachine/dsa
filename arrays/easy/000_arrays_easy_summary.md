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