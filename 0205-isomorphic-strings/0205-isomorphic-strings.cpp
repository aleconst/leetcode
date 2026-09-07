class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> forward;
        unordered_map<char, char> backward;

        for (int i = 0; i < s.size(); i++)
        {
            if (forward.count(s[i]) && forward[s[i]] != t[i])
                return false;

            if (backward.count(t[i]) && backward[t[i]] != s[i])
                return false;

            forward[s[i]] = t[i];
            backward[t[i]] = s[i];
        }

        return true;
    }
};