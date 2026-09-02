class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> counter(26, 0);
        int index = 0;

        for (const char& c : s)
            counter[c - 'a']++;

        for (const char& c : s)
        {
            if (counter[c - 'a'] == 1)
                return index;

            index++;
        }

        return -1;
    }
};