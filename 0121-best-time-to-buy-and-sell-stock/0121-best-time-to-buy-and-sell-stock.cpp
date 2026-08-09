class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            minim = min(minim, prices[i]);
            profit = max(profit, prices[i] - minim);
        }

        return profit;
    }
};