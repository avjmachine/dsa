class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int heaviest, second_heaviest;
        priority_queue<int> stonePQueue;
        
        for(auto s: stones){
            stonePQueue.push(s);
        }
            
        while(stonePQueue.size()>1){
            heaviest = stonePQueue.top();
            stonePQueue.pop();
            second_heaviest = stonePQueue.top();
            stonePQueue.pop();
            
            if(heaviest != second_heaviest){
                stonePQueue.push(heaviest-second_heaviest);
            }
        }
        
        return stonePQueue.empty()?0:stonePQueue.top();
    }
};