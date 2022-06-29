class Solution {
public:
    int pivotIndex(vector &nums) {

        int left_sum = 0, total_sum = 0;

        for (auto n : nums) {
            total_sum += n;
        }

        for (unsigned int i = 0; i < nums.size(); i++) {
            int right_sum = total_sum - (left_sum + nums[i]);
            if (left_sum == right_sum) {
                return i;
            }
            left_sum += nums[i];
        }

        return -1;
    }
};