class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maximum = -1;

        while (left < right)
        {
            int amount = min (height[left], height[right]) * (right - left);

            if (maximum < amount)
                maximum = amount;

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maximum;
    }
};