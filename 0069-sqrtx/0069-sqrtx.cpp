class Solution {
public:
    int mySqrt(int x) {
        long long left = 0;
        long long right = x;
        long long sol = 0;

        while (left <= right)
        {
            long long mid = (right - left) / 2 + left;

            if (mid * mid == x)
                return mid;
            else if (mid * mid < x)
            {
                sol = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }

        return sol;
    }
};