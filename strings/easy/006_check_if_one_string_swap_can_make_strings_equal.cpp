class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int no_mismatches = 0;
        char c1, c2;
        for (int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                no_mismatches++;
                if (no_mismatches==1){
                    c1 = s1[i];
                    c2 = s2[i];    
                } else if (no_mismatches==2){
                    if((s1[i]!=c2)||(s2[i]!=c1)){
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (no_mismatches==0 || no_mismatches==2){
            return true;    
        } else {
            return false;
        }

    }
};