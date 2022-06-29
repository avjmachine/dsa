class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        //mapping dictionary for checking keys
        unordered_map<char, char> s_t_map;
        //creating a set for checking if values are already utilized for another key
        unordered_set<char> val_set;
        
        for (unsigned int i=0; i<s.length(); i++){
            // add to mapping if not already present
            if (s_t_map.find(s[i])== s_t_map.end()){
                // before adding, reject if value is already utilized
                if (val_set.find(t[i]) != val_set.end()){
                    return false;
                }
                //update both mapping and value set
                s_t_map[s[i]] = t[i];
                val_set.insert(t[i]);
            }
            else{
                // if already present in mapping, 
                // reject if not consistent with previous entry
                if(s_t_map[s[i]] != t[i]){
                    return false;
                }
            } 
        }
        return true;
    }
};