class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left_idx = 0;
        int right_idx = nums.size()-1;
        
        while (left_idx<=right_idx){
            int mid = left_idx + (right_idx-left_idx)/2;
            if (target == nums[mid]){
                return mid;                            
            }
            else if (target<nums[mid]){
                right_idx = mid-1;
            }
            else {
                left_idx = mid+1;
            }
        }
        
        return -1;
    }
};