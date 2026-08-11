class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                ans.push_back (nums[i / 2]);
            else
                ans.push_back (nums[i / 2 + n]);
        }

        return ans;
    }
};