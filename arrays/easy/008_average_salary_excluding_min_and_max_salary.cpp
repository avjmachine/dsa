class Solution {
public:
    double average(vector<int>& salary) {
        int min_salary = numeric_limits<int>::max();
        int max_salary = numeric_limits<int>::min();
        int sum_salary = 0;
        
        for(auto i: salary){
            sum_salary += i;
            min_salary = min(min_salary, i);
            max_salary = max(max_salary, i);
        }
        
        return static_cast<double>(sum_salary - min_salary - max_salary) / (salary.size() - 2);
    }
};