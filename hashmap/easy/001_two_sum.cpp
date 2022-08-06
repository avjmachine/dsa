class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> val2IndexMap;
        for(int i=0; i<nums.size(); i++){
           if (val2IndexMap.find(target-nums[i]) == val2IndexMap.end()){
               val2IndexMap[nums[i]] = i;
           }
           else{
                result[0] = i;
                result[1] = val2IndexMap[target-nums[i]];
                return result;
            }
           } 
  return result;
  }
};
