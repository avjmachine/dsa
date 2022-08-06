class Solution {
public:
    int stepCostMemo[1001] = {0};
    int minCostClimbingStairs(vector<int>& cost) {       
        int n = cost.size();
        stepCostMemo[0] = cost[0];
        stepCostMemo[1] = cost[1];
        
        for(int i{2}; i<n; i++){
            stepCostMemo[i] = cost[i]+min(stepCostMemo[i-1], stepCostMemo[i-2]);
        }
        return min(stepCostMemo[n-1], stepCostMemo[n-2]);
    }
};

// space optimized solution
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {       
        int n = cost.size();
        int secondPrevStepCost = cost[0];
        int prevStepCost = cost[1];
        int currentStepCost;
        
        for(int i{2}; i<n; i++){
            currentStepCost = cost[i]+min(prevStepCost, secondPrevStepCost);
            
            secondPrevStepCost = prevStepCost;
            prevStepCost = currentStepCost;
        }
        return min(prevStepCost, secondPrevStepCost);
    }
};