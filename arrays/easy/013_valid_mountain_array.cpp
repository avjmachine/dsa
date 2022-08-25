class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int ptr = 0;
        // ascent till peak / end of array
        while ((ptr<arr.size()-1) && (arr[ptr+1]>arr[ptr])){
            ptr++;
        }
        // peak validation
        if ((ptr==0)||(ptr==arr.size()-1)){
            return false;
        }
        // descent with validation
        while (ptr<arr.size()-1){
            if (arr[ptr] <= arr[ptr+1]){
                return false;
            }
            ptr++;
        } 
        
        return true;
    }
};

