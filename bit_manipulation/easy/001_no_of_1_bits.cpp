class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setbit_count = 0;
        while(n>0){
            setbit_count += n&1;
            n >>= 1;
        }
        return setbit_count;
    }
};

// Alternate solution - using bitset count method from std library, but where is DSA?
class Solution2 {
public:
    int hammingWeight(uint32_t n) {
        return bitset<32>(n).count();
    }
};