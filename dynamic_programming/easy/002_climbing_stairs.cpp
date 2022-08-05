class Solution {
public:
    int climbMemo[46]={0};
    int climbStairs(int n) {
        if (n==1 || n==2)
            return n;
        if (climbMemo[n] != 0)
            return climbMemo[n];
        climbMemo[n] = climbStairs(n-1) + climbStairs(n-2);
        return climbMemo[n];
    }
};

// branch out options like a tree
// 1 - 1
// 2 - 1+1, 2
// 3 - 1&no. of ways for 3-1 steps, 2&no. of ways for 3-2 steps
//   - 1+1+1, 1+2, 2+1
// 4 - 1&no. of ways for 4-1 steps, 2&no. of ways for 4-2 steps
//   - 1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2