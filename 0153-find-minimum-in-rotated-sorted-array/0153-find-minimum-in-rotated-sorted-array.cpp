class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = static_cast <int> (nums.size()) - 1;
        int sol = 0;

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;

            if (nums[mid] < nums[sol])
            {
                sol = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return nums[sol];
    }
};