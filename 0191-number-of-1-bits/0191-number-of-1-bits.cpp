class Solution {
public:
    int hammingWeight(int n) {
        int counter = 0;

        while (n)
        {
            if (n & 1)
                counter++;

            n = n >> 1;
        }

        return counter;
    }
};