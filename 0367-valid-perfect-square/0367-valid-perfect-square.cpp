class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num;
        long long middle = left + (right - left) / 2;

        while (left <= right)
        {
            if (middle * middle == num)
                return true;
            else if (middle * middle > num)
            {
                right = middle - 1;
                middle = left + (right - left) / 2;
            }
            else if (middle * middle < num)
            {
                left = middle + 1;
                middle = left + (right - left) / 2;
            }
        }

        return false;
    }
};