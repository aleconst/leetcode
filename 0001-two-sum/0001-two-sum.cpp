class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer = nums;
        
        sort (answer.begin(), answer.end());

        vector<int> poz(2, 0);
        bool found = false;
        int first = 0;
        int second = 0;

        for (int i = 0; i < answer.size() && !found; i++)
        {
            int dif = target - answer[i];

            int left = i + 1;
            int right = answer.size() - 1;

            while (left <= right && !found)
            {
                int middle = left + (right - left) / 2;

                if (answer[middle] == dif)
                {
                    poz[0] = i;
                    poz[1] = middle;
                    found = true;
                }
                else if (answer[middle] > dif)
                    right = middle - 1;
                else if (answer[middle] < dif)
                    left = middle + 1;
            }
        }

        first = answer[poz[0]];
        second = answer[poz[1]];

        for (int i = 0; i < nums.size(); i++)
        {
            if (first == nums[i])
            {
                poz[0] = i;
                break;
            }
        }

        for (int i = 0; i < nums.size(); i++)
            if (second == nums[i] && poz[0] != i)
            {
                poz[1] = i;
                break;
            }

        return poz;
    }
};