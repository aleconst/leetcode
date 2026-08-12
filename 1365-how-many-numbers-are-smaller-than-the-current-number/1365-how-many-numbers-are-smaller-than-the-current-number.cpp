class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());

        vector<int> ans;
        int value;

        for (int i = 0; i < nums.size(); i++)
        {
            int left = 0;
            int right = copy.size() - 1;

            while (left <= right)
            {
                int middle = left + (right - left) / 2;

                if (nums[i] == copy[middle])
                {
                    value = middle;
                    right = middle - 1;
                }
                else if (nums[i] < copy[middle])
                    right = middle - 1;
                else if (nums[i] > copy[middle])
                    left = middle + 1;
            }

            ans.push_back(value);
        }

        return ans;
    }
};