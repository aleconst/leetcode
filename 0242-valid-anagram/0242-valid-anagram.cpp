class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        vector<int> counter(26, 0);

        for (const char& c : s)
            counter[c - 'a']++;

        for (const char& c : t)
            counter[c - 'a']--;

        for (int i = 0; i < 26; i++)
            if (counter[i])
                return false;

        return true;
    }
};