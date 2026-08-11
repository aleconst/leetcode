class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        int right = x;
        long long middle = left + (right - left) / 2;

        while (left <= right)
        {
            if (middle * middle == x)
                return middle;
            else if (middle * middle > x)
            {
                right = middle - 1;
                middle = left + (right - left) / 2;
            }
            else if (middle * middle < x)
            {
                left = middle + 1;
                middle = left + (right - left) / 2;
            }
        }

        return --middle;
    }
};