// O(n^2) soln
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if ((arr[i] == arr[j]*2) || (arr[j] == arr[i]*2)){
                    return true;
                }
            }
        }
        return false;
    }
};

// improved O(log n) soln
class Solution2 {
public:
    bool binarySearch(const vector<int> arr, int left, int right, int target){
        while(left<=right){
            int mid = left + (right-left)/2;
            if (target == arr[mid]){
                cout<<"found: "<<target<<endl;
                return true;
            }
            else if (target < arr[mid]){
                right = mid-1;
            }
            else{
                left = left+1;
            }
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            if (arr[i]%2==0 && binarySearch(arr, i+1, arr.size()-1, arr[i]/2)){
                return true;
            }
            if (binarySearch(arr, i+1, arr.size()-1, 2*arr[i])){
                return true;
            }
        }
        return false;
    }
};


// further improved O(n) soln
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> elset;
        for(int n: arr){
            if ((n%2==0) && (elset.find(n/2) != elset.end())){
                return true;
            }
            else if(elset.find(n*2) != elset.end()){
                return true;
            }
            elset.insert(n);
        }
        return false;
    }
};