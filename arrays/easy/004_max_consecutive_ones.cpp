class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsOnes = 0;
        int runningSum = 0;
        for(auto i: nums){
            if (i){
                runningSum++;
            }
            else{
                maxConsOnes = max(maxConsOnes, runningSum);
                runningSum = 0;
            }
        }
        return max(maxConsOnes, runningSum);
    }
};