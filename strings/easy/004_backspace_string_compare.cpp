class Solution {
public:
    string processBackspace(string st){
        string st_processed;
        for (auto c:st){
            if (c != '#'){
                st_processed.push_back(c);
            }
            else if (!st_processed.empty()){
                st_processed.pop_back();
            }
        }
        return st_processed;
    }
    
    bool backspaceCompare(string s, string t) {
        string s_processed = processBackspace(s);
        string t_processed = processBackspace(t);
        
        if (s_processed.size()!=t_processed.size()){
            return false;
        }
        else {
            for(int i{}; i<s_processed.size(); i++){
                if (s_processed[i] != t_processed[i]){
                    return false;
                }
            }
        }
        return true;
    }
};

// TODO: solution with two pointers approach