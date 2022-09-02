# Approach used for linked list problems - easy level

1. reverse_linked_list (leetcode-206)
approach: for iterative approach, initialize prev as nullptr, then while traversing store next in temp variable, point current to previous, and finally keep updating prev and current; for recursive approach, reverse all but first element, connect next->next (earlier head, but now tail of sublist under reversal) back to first element and cutoff original next by assigning nullptr to it
tips: for recursive approach, use older pointer connections rather than traversing till end to get tail of reversed sublist

2. middle_of_the_linked_list (leetcode-876)
approach: use two pointers, one slow and one fast pointer, fast pointer moves two steps for every step of slow pointer, when fast pointer reaches end of list, slow pointer would be at middle of list; alternative approach could be to convert to an array of linked list pointer elements and fetch element from middle index of the array
tips: none

3. merge_two_sorted_lists.cpp (leetcode-21)
approach: maintain 2 pointers, one for each list, and also a head and a tail pointer, initialize head and tail to the list with the lower value, then keep updating tail by stepping one element at a time with the lower value, and updating the pointer on the respective linked list, till one of the lists reaches nullptr - attach whichever linked remains directly to the end
tips: handle the corner case of one or both linked lists being empty

4. intersection_of_two_linked_lists (leetcode-160)
approach: O(m*n) brute force approach would be to compare next of each element in one list with every element in the other element; O(m+n) approach would need two pointers starting from head of each list and moving one step at a time together, they would meet at the intersecting node in first pass if both lists are equal size, in case of unequal size they would meet in second pass if we move to the pointers to the beginning of the other list after reachingg end, in case of non-intersecting lists they would meet virtually at end of list with same null reference!
tips: O(m+n) reference requires knowledge of fact that the two pointers moving on lists of unequal sizes would eventually meet at a common node if we compensate for the difference in lengths by making the pointers go to the other lists' head after finishing one round of traversal 