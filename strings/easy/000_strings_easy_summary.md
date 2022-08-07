# Approach used for string problems - easy level

1. isomorphic_strings (leetcode-205)
approach: use hashmap for s to t mapping and set for checking if values are already mapped(reverse mapping)
tips: using hashmap both directions will occupy more space, so use set for the other direction

2. is_subsequence (leetcode-392)
approach: use two pointers
tips: check s for empty string if there are no loop constraints for the same

3. longest_palindrome (leetcode-409)
approach: use a hashmap to store count of each letter, length of palindrome is twice the number of letters in pairs plus 1 if the count is odd for any letter
tips: None

4. backspace_string_compare (leetcode-844)
approach: use a stack-like approach to build the processed string from the backspace characters, and then compare the final built strings; alternate approach is to use 2 pointers in the reverse direction starting from the end of the string and comparing character by character, jumping the pointers whenever a backspace # character is encountered
tips: None