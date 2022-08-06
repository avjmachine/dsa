# Approach used for dynamic programming problems - easy level

1. fibonacci_number (leetcode-509)
approach: can use 1.plain recursion 2.iterative(space optimized) 3.dp top down 4.dp bottom up 5.Binet's formula/golden ratio method
tips: None

2. climbing_stairs (leetcode-70)
approach: everything can be decomposed to just 2 cases - (i)1 step-> soln for (n-1) steps, (ii) 2 steps-> soln for (n-2) steps, branching out like a tree. So, use dynamic programming!
other approaches used for fibonacci can be used here too, since ultimately it is a similar problem with same equation
tips: None

3. min_cost_climbing_stairs (leetcode-746)
approach: total cost of a step is current step cost + min(prev_step cost, second_prev_step cost), base case is 0th and 1st index, store each result in memo - can also be solved in reverse way starting from last and second last step
tips: can remove memo array and instead use variable to optimize space
