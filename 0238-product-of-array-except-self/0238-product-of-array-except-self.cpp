class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int product = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            answer[i] = product;
            product *= nums[i];
        }

        product = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            answer[i] *= product;
            product *= nums[i];
        }

        return answer;
    }
};