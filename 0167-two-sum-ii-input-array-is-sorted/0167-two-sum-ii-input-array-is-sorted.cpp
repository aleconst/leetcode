class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index(2);

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right)
        {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target)
                break;
            else if (sum < target)
                left++;
            else
                right--;
        }

        index[0] = left + 1;
        index[1] = right + 1;

        return index;
    }
};