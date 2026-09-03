class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];

            auto iterator = seen.find(diff);

            if (iterator != seen.end())
                return {i, iterator -> second};

            seen[nums[i]] = i;
        }

        return {};
    }
};