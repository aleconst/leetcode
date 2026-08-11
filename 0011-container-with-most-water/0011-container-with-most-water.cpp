class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int amount = 0;
        int max_amount = 0;

        while (left < right)
        {
            amount = (right - left) * min (height[left], height[right]);
            max_amount = max  (max_amount, amount);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return max_amount;
    }
};