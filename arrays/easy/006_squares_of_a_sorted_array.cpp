class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int left_ptr = 0;
        int right_ptr = n-1;
        
        for (int i=n-1; i>=0; i--){
            if (abs(nums[right_ptr]) >= abs(nums[left_ptr])){
                result[i] = pow(nums[right_ptr], 2);
                right_ptr--;
            }
            else {
                result[i] = pow(nums[left_ptr], 2);
                left_ptr++;
            }
        }
        return result;
    }
};