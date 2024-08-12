class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy = prices[0];
      int profit = 0;
      for(int i = 0; i < prices.size(); i++){
        if(prices[i] > buy){
          profit += prices[i] - buy;
          buy = prices[i];
        }
        buy = prices[i];
      }
      return profit;
    }
};
