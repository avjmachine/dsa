class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int s_len = s.length();
        int t_len = t.length();
        
        int s_ptr {};
        int t_ptr {};
        
        if (s_len > t_len){
            return false;
        }
        
        if (s_len == 0){
            return true;
        }
        
        while (t_ptr < t_len){
           if (s[s_ptr] == t[t_ptr]) {
               s_ptr++;
               if (s_ptr == s_len){
                   return true;
               }
           }
           t_ptr++; 
        }
        
        return false;        
    }
};