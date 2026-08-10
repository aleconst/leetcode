class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            if (abs(nums[left]) > abs(nums[right]))
            {
                answer.push_back (nums[left]);
                left++;
            }
            else
            {
                answer.push_back (nums[right]);
                right--;
            }
        }

        reverse (answer.begin(), answer.end());

        for (int i = 0; i < answer.size(); i++)
            answer[i] *= answer[i];

        return answer;
    }
};