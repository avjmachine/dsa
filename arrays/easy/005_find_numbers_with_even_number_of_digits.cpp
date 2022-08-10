class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int countEvenDigits = 0;
       for(auto i: nums){
            if ((int(log10(i))+1)%2 == 0)
                countEvenDigits++;
       }   
       return countEvenDigits;
    }
};