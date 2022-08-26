class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        
        int greater_ele = -1;
        
        for(int i=n-1; i>=0; i--){
            int current_ele = arr[i];
            arr[i] = greater_ele;
            greater_ele = max(current_ele, greater_ele);
        }
        
        return arr;
    }
};