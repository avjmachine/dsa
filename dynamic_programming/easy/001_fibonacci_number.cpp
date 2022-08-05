// recursive
class Solution1 {
public:
    int fib(int n) {
        if (n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};

// dp top down
class Solution2 {
public:
    int fibMemo[31] = {0};
    int fib(int n) {
        if (n==0 || n==1){
            return n;
        }
        if (fibMemo[n] != 0){
            return fibMemo[n];
        }
        fibMemo[n] = fib(n-1)+fib(n-2);
        return fibMemo[n];
    }
};

// dp bottom up
class Solution {
public:
    int fibMemo[31] = {0};
    int fib(int n) {
        if (n==0 || n==1){
            return n;
        }
        
        fibMemo[1] = 1;
        for(int i=2;i<=n;i++){
            fibMemo[i] = fibMemo[i-1]+fibMemo[i-2];
        }
        return fibMemo[n];
    }
};


// iterative approach (space optimized)
class Solution {
public:
    int fib(int n) {
        if (n==0 || n==1){
            return n;
        }
        int nMinus1=1, nMinus2=0;
        int current;
        for (int i=2;i<=n;i++){
            current = nMinus1 + nMinus2;
            nMinus2 = nMinus1;
            nMinus1 = current;
        }
        return current;
    }
};

// Golden Ratio, Binet's Formula
class Solution {
public:
    int fib(int n){
        int fn = int((pow(1+sqrt(5), n) - (pow(1-sqrt(5), n))) / (pow(2,n)*sqrt(5)));
        return fn;
    }
};