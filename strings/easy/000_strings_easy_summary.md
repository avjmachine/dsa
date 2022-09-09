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

5. ransom_note (leetcode-383)
approach: use a hashmap to store the characters of magazine string with their respective count, now loop through the characters in ransomnote string and decrement the count from the magazine hashmap, if any char is not found, return false, return true if all chars are found; alternate approach is to convert both to sets and see if the ransomnote is a subset of magazine
tips: None

6. check_if_one_string_swap_can_make_strings_equal (leetcode-1790)
approach: loop through each char, checking for equality and counting mismatches, on first mismatch store the index/mismatching chars, on second mismatch check if it is swappable with chars from first mismatch, if not return false, if there is any more mismatch also return a false immediately - at the end if there is no mismatch or 2 mismatches, return true else false
tips: don't forget the edge case of one mismatching character

7. goal_parser_interpretation (leetcode-1678)
approach: simple if-else
tips: this is where one can be creative, by using incrementers in the if-else blocks to skip certain no. of characters