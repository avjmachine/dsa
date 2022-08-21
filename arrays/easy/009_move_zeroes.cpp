class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int shift_counter = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                shift_counter++;
            }
            else{
                nums[i-shift_counter] = nums[i];
            }
        }
        for(int j=n-1;j>n-1-shift_counter;j--){
            nums[j] = 0;
        }
    }
};