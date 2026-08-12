class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int amount = 0;

        while (left <= right)
        {
            amount = max (amount, (right - left) * min (height[left], height[right]));
            
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return amount;
    }
};