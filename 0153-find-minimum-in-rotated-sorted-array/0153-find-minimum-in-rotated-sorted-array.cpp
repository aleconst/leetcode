class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int minimum = INT_MAX;

        while (left <= right)
        {
            int middle = left + (right - left) / 2;

            minimum = min (minimum, nums[middle]);

            if (nums[middle] > nums[right])
                left = middle + 1;
            else
                right = middle - 1;
        }

        return minimum;
    }
};