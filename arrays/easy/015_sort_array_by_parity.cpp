class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int writePtr = -1;
        for (int readPtr=0;readPtr<nums.size();readPtr++){
            if(writePtr >=0 && nums[readPtr]%2 == 0){
                swap(nums[writePtr], nums[readPtr]);
                writePtr++;
            }
            else if ((writePtr == -1) && (nums[readPtr]%2 != 0)) {
                writePtr = readPtr;
            }
        }
        return nums;
    }
};

// another approach with pointers starting from opposite ends moving towards centre
class Solution2 {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left_ptr {0};
        int right_ptr {static_cast<int>(nums.size())-1};
        
        while (left_ptr < right_ptr){
            if ((nums[left_ptr]%2 == 1) && (nums[right_ptr]%2 == 0)){
                swap(nums[left_ptr], nums[right_ptr]);
            }
            if (nums[left_ptr]%2 == 0){
                left_ptr++;
            }
            if (nums[right_ptr]%2 == 1){
                right_ptr--;
            }
        }
        
        return nums;
    }
};