class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buyprice = prices[0];
        int max_pft = 0;
        for(int i=0;i<prices.size();i++){
            if (prices[i]<min_buyprice){
                min_buyprice = prices[i];
            }
            else if (prices[i]-min_buyprice > max_pft){
                max_pft = prices[i]-min_buyprice;
            }
        }
      return max_pft;
    }
};