class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int curr = 0;
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[curr]>prices[i]){
                curr = i;
            }
            profit = prices[i] - prices[curr];
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};