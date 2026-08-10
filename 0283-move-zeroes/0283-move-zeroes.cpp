class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_counter = 0;
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                nums[k] = nums[i];
                k++;
            }
            else
                zero_counter++;
        }

        k = nums.size() -1;
        
        while (zero_counter)
        {
            nums[k] = 0;
            zero_counter--;
            k--;
        }
    }
};