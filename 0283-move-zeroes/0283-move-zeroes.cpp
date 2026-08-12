class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_counter = 0;
        int index = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                nums[index] = nums[i];
                index++;
            }
            else
                zero_counter++;
        }

        for (int i = 0; i < zero_counter; i++)
            nums[nums.size() - i - 1] = 0;
    }
};