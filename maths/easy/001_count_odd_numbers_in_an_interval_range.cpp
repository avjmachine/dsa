class Solution {
public:
    int countOdds(int low, int high) {
        // use the observation that difference betn 2 odd nos. is half the range + 1
        // when low and high are even, take the next relevant odd no.
        int startOdd = low % 2 ? low : low+1;
        int endOdd = high % 2 ? high : high-1;
        
        return ((endOdd-startOdd)/2) + 1;
    }
};

// can also use the fact that no. of odd nos. between 
// end and start = floor((high-low)/2) + (1 if either or both low or high are odd)