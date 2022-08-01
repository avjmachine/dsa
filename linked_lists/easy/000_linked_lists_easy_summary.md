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