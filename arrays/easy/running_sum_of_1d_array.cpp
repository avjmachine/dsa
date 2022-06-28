class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rsum {nums};
        for (int i=1; i<nums.size();i++){
            rsum[i] += rsum[i-1];
        }
        return rsum;
    }
};