class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0;  
        long long right = n;
        long long  sol = 0;

        while (left <= right)
        {
            long long mid = (right - left) / 2 + left;

            if (mid * (mid + 1) / 2 == n)
                return mid;
            else if (mid * (mid + 1) / 2 < n)
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