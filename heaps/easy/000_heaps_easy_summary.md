# Approach used for heap problems - easy level

1. last_stone_weight (leetcode-1046)
approach: use a priority queue, push all the weights into this queue, and in a while loop that runs till more than 1 element remains, pop out the top 2 weights to evaluate the conditions, and push back the difference when the condition is met
tips: None