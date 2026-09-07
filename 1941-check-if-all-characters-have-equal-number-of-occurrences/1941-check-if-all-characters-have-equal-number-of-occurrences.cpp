class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        for (const char& character : s)
            freq[character]++;

        int val = freq.begin() -> second;

        for (const auto& [character, count] : freq)
            if (count != val)
                return false;

        return true;
    }
};