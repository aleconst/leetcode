class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0;  
        int right = n;
        int sol = 0;

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