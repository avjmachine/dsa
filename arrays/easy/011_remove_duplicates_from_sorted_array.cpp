class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int shift_counter = 0;
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]){
                shift_counter++;
            }
            else{
                nums[i-shift_counter]=nums[i];
            }
        }
        return nums.size()-shift_counter;
    }
};

// can be also written closer to description in the summary as follows:
// (logic/approach is same, only implementation is different)

class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow_ptr = 0;
        // i is fast_ptr
        for (int i=1;i<nums.size();i++){
            if (nums[i]!=nums[i-1]){
                slow_ptr++;
                nums[slow_ptr]=nums[i];
            }
        }
        return slow_ptr+1;
    }
};