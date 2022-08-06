# Approach used for hashmap problems - easy level

1. two_sum (leetcode-1)
approach: use a hashmap to store number as key, and its index as val; loop through the input array and for each element, calcuate its to-be-found pair by subtracting it from target, and search for this to-be-found number in the hashmap; if found, return both the indices, else add the element and its index to the hashmap
tips: use a vector of size 2 and change just assign/change these values, rather than using push_back