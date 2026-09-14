class Solution {
public:
    int countGoodSubstrings(string s) {
        int counter = 0;

        for (int i = 0; i + 2 < s.size(); i++)
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
                counter++;

        return counter;
    }
};