class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++)
        {
            auto iterator = seen.find(nums[i]);

            if (iterator != seen.end() && abs(i - iterator -> second) <= k)
                return true;

            seen[nums[i]] = i;
        }

        return false;
    }
};