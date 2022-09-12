# Approach used for linked list problems - medium level

1. linked_list_cycle_ii (leetcode - 142)
approach: use arithmetic/algebra to find the fact that dist from head to joining point is same as clockwise distance from meeting point to joining point (l1 - head to joining, l2 joining to meeting clockwise, x - meeting to joining clockwise; since dist travelled by fastptr is 2x of slowptr, 2*(l1+l2) = (l1+l2)+(x+l2) => l1=x) after arriving at this fact, use fast and slow pointers to get to meeting point, then start one ptr from head and another from meeting point, the node where they meet is the joining point; alternate approach: make every node's next point to a temp node and during traversal if already a temp node is being pointed to, that is the joining node!
tips: take care of null pointers while checking for validity

2. remove_nth_node_from_end_of_list (leetcode-19)
approach: for simpler two pass solution, in first pass, find out length of element by traversal, in second pass reach to the nth element from end, again by traversal from start to node just before the one to be deleted, then for deleting switch next pointer from this previous node to the node after; for single pass solution, move first pointer to nth position, after reaching, now start moving second pointer also along with it till end of list - since, size = x+n, when first pointer reaches end/null, second pointer reaches the xth(nth from end) element, now delete and return the list
tips: account for corner cases at front of list, end of list, also delete dangling pointers if needed

3. add_two_numbers (leetcode-2)
approach: add every node in list 1 to its corresponding node in l2, take the carry to the sum of the next nodes, repeat until both lists are completely traversed (if both lists are unequal in size, continue till the end of the longer list is reached) and also until carry is zero
tips: can create dummy node and return next of dummy to avoid checks for first head node, do not forget the corner case of reaching end of both lists, but still having a non-zero carry, do create an extra node for such a carry in the result

4. rotate_list (leetcode - 61)
approach: get size of list, calculate no. of skips to be made based on size vs k, reach the new head by skipping that many nodes, cut off the new tail, while link old tail to head and return new head
tips: use modulo operator to reduce no. of loops/skips to a max of size