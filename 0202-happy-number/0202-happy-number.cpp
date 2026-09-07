class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (true)
        {
            if (n == 1)
                return true;
            
            if (seen.count(n))
                return false;
            
            seen.insert(n);

            int sum = 0;

            while (n)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            
            n = sum;
        }
    }
};