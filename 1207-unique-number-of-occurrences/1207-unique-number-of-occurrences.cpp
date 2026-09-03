class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen_freq;

        for (const int& key : arr)
            freq[key]++;

        for (const auto& [key, val] : freq)
        {
            if (seen_freq.count(val))
                return false;

            seen_freq.insert(val);
        }

        return true;
    }
};