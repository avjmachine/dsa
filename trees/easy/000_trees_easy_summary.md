# Approach used for tree problems - easy level

1. n-ary_tree_preorder_traversal (leetcode-589)
approach: for recursive approach, append val of the node to the result vector and loop through each child and call the recursive function with child as the root. for iterative approach, create a stack with root element pushed to it, then in a loop that runs till stack is empty, pop the top of the stack to the result vector and push the children of this node to the stack in reverse order - repeat till stack is empty
tips: handle the corner case of root with nullptr

2.
approach: If one no is lesser than the root and another greater, both have this root as the lca and even if one of them is equal to root, the root will the lca, else if both are less than or equal to root, update left or right child respectively as root - using this as the new root, try the same logic till you reach one of those elements... same logic for iterative and recursive
tips: invert the sequence of above if-else to minimize size of conditional statements