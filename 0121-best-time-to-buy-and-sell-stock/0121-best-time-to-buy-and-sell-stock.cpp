class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            minim = min (minim, prices[i]);
            max_profit = max (max_profit, prices[i] - minim);
        }

        return max_profit;
    }
};