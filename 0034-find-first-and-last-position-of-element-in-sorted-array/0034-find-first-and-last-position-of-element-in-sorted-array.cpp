class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = static_cast <int> (nums.size()) - 1;
        int pos_low = -1;

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;

            if (nums[mid] >= target)
            {
                if (nums[mid] == target)
                    pos_low = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        left = 0;
        right = static_cast <int> (nums.size()) - 1;
        int pos_high = -1;

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;

            if (nums[mid] <= target)
            {
                if (nums[mid] == target)
                    pos_high = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }

        return {pos_low, pos_high};
    }
};