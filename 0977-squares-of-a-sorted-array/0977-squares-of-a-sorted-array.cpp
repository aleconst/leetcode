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

        for (int i = 0; i < answer.size() / 2; i++)
            swap (answer[i], answer[answer.size() - i - 1]);

        for (int i = 0; i < answer.size(); i++)
            answer[i] = pow (answer[i], 2);

        return answer;
    }
};