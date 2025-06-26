class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++){
            min_val = min(min_val , prices[i]);
            profit = max(profit , prices[i] - min_val);
        }
        return profit;
    }
};