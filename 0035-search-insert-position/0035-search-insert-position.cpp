class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0 ;
        int right = nums.size() - 1;
        int middle = left + (right - left) / 2;

        while (left <= right)
        {
            if (target == nums[middle])
                return middle;
            else if (target < nums[middle])
            {
                right = middle - 1;
                middle = left + (right - left) / 2;
            }
            else if (target > nums[middle])
            {
                left = middle + 1;
                middle = left + (right - left) / 2;
            }
        }

        return middle;
    }
};