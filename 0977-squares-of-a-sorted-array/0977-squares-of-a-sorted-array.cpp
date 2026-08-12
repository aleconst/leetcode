class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer(nums.size(), 0);

        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size() - 1;

        while (left <= right)
        {
            if (abs(nums[left]) > abs(nums[right]))
            {
                answer[index] = nums[left];
                index--;
                left++;
            }
            else
            {
                answer[index] = nums[right];
                index--;
                right--;
            }
        }

        for (int i = 0; i < answer.size(); i++)
            answer[i] = pow(answer[i], 2);

        return answer;
    }
};