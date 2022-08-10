class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineCMap;
        for (auto mag_char: magazine){
            if (magazineCMap.find(mag_char) == magazineCMap.end()){
                magazineCMap[mag_char] = 1;
            }
            else{
                magazineCMap[mag_char]++;
            }
        }
        
        for (auto ransom_char: ransomNote) {
            if (magazineCMap.find(ransom_char) == magazineCMap.end()){
                return false;
            } 
            else {
                magazineCMap[ransom_char]--;
                if (magazineCMap[ransom_char] == 0)
                    magazineCMap.erase(ransom_char);
            }
        }
        
        return true;
    }
};

//alternate approach using multiset

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> magSet(magazine.begin(), magazine.end());
        multiset<char> ransomSet(ransomNote.begin(), ransomNote.end());
        return includes(magSet.begin(), magSet.end(), ransomSet.begin(), ransomSet.end());
    }
};