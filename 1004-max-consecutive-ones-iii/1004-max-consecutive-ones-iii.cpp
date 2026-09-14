class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxim = 0;
        int zeros = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (!nums[right])
                zeros++;

            while (zeros > k)
            {
                if (!nums[left])
                    zeros--;

                left++;
            }

            maxim = max (maxim, right - left + 1);
        }

        return maxim;
    }
};