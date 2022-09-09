class Solution {
public:
    string interpret(string command) {
        string result {""};
        char prev_c;
        for (auto c: command) {
            if(c=='G'){
                result += 'G';
            }
            else if(prev_c == '(' && c==')') {
                result += 'o';
            }
            else if(prev_c == 'l' && c==')') {
                result += "al";
            }
            prev_c = c;
        }
        return result;
    }
};