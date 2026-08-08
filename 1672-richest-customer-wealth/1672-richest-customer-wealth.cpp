class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1, sum = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int j = 0;

            while (j < accounts[i].size())
            {
                sum += accounts[i][j];
                j++;
            }

            if (max < sum)
                max = sum;

            sum = 0;
        }

        return max;
    }
};