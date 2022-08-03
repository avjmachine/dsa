// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int fbversion;
        
        while (left<=right){
            int pivot = left + (right-left)/2;
            if (isBadVersion(pivot)){
                right = pivot-1;  
                fbversion = pivot;
            }
            else{
                left = pivot+1;
            }
        }
        
        return fbversion;
    }
};

