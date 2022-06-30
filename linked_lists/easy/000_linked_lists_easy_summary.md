# Approach used for linked list problems - easy level

1. reverse_linked_list (leetcode-206)
approach: for iterative approach, initialize prev as nullptr, then while traversing store next in temp variable, point current to previous, and finally keep updating prev and current; for recursive approach, reverse all but first element, connect next->next (earlier head, but now tail of sublist under reversal) back to first element and cutoff original next by assigning nullptr to it
tips: for recursive approach, use older pointer connections rather than traversing till end to get tail of reversed sublist
