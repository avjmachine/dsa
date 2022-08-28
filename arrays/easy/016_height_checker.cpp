class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> counts(101,0);
        for(int i=0;i<heights.size();i++){
            counts[heights[i]]++;
        }
        int i=0; 
        int mismatch_count = 0;
        for(int j=0; j<counts.size(); j++){
            while(counts[j] != 0){
                if(j != heights[i]){
                    mismatch_count++;
                }
                i++;
                counts[j]--;
            }
        }
        return mismatch_count;
    }
};