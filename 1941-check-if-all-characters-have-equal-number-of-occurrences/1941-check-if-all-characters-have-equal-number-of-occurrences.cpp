class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> seen;

        for (const char& c : s)
            seen[c]++;

        int val = seen[s[0]];

        for (const char& c : s)
            if (seen[c] != val)
                return false;

        return true;
    }
};