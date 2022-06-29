# Approach used for string problems - easy level

1. isomorphic_strings (leetcode-205)
approach: use hashmap for s to t mapping and set for checking if values are already mapped(reverse mapping)
tips: using hashmap both directions will occupy more space, so use set for the other direction

2. is_subsequence (leetcode-392)
approach: use two pointers
tips: check s for empty string if there are no loop constraints for the same