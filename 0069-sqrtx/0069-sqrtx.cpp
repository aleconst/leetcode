class Solution {
public:
    int mySqrt(int x) {
        long long left = 1;
        long long right = x;
        long long middle;
        long long answer;

        while (left <= right)
        {
            middle = left + (right - left) / 2;

            if (middle * middle <= x)
            {
                answer = middle;
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
            }
        }

        return answer;
    }
};