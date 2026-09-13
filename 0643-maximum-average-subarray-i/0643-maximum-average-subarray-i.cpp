class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxim = 0;

        for (int i = 0; i < k; i++)
            maxim += nums[i];

        int sum = maxim;

        for (int i = k; i < nums.size(); i++)
        {
            sum = sum - nums[i - k] + nums[i];

            if (maxim < sum)
                maxim = sum;
        }

        return static_cast <double> (maxim) / k;
    }
};