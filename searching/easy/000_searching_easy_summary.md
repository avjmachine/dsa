# Approach used for array problems - easy level

1. binary_search (leetcode-704)
approach: textbook algorithm, create left and right variables/pointers, divide sorted list into 2 halves with mid element, check if mid is equal to target, if yes return that index, else check if target is lesser than mid, then search in left half by moving right pointer to mid-1, else if greater, then search in right half by moving left pointer to mid+1, repeat till element is found or till left crosses over right

2. first_bad_version (leetcode-278)
approach: use binary search, whenever API returns a mid/pivot as bad version, save it in a variable x and update right end as pivot-1 to search in the left older half, when API returns as good version, update left end as pivot+1 to search in right newer half, keep looping till left crosses over right, at the end return the variable x which was last saved as a bad version