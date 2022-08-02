class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> cmap;
        int palindromeLength = 0;
        bool oddElement = false;
        
        for (auto c: s){
            if (cmap.find(c) != cmap.end()){
                cmap[c] += 1;
            }
            else {
                cmap[c] = 1;
            }
        }
        
        for (auto i: cmap){
                palindromeLength += 2*(i.second/2);
                if (i.second % 2 == 1){
                    oddElement = true;
                }
        }
        
        if (oddElement)
            palindromeLength++;
        
        return palindromeLength;
    }
};