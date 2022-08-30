class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> count(nums.size()+1, 0);
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            }
        for(int j=1;j<=nums.size();j++){
            if(count[j] == 0){
                result.push_back(j);
            }
        }
        return result;
    }
};

// O(1) space (excluding result) and O(n) time, using negation markers
class Solution2 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            unsigned int safe_index = abs(nums[i])-1;
            nums[safe_index] = -1*abs(nums[safe_index]);    
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};