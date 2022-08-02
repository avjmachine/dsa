# Approach used for tree problems - easy level

1. n-ary_tree_preorder_traversal (leetcode-589)
approach: for recursive approach, append val of the node to the result vector and loop through each child and call the recursive function with child as the root. for iterative approach, create a stack with root element pushed to it, then in a loop that runs till stack is empty, pop the top of the stack to the result vector and push the children of this node to the stack in reverse order - repeat till stack is empty
tips: handle the corner case of root with nullptr