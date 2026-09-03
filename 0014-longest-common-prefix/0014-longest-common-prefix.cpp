class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const string& first = strs[0];

        for (int i = 0; i < first.size(); i++)
        {
            char c = first[i];

            for (const string& s : strs)
                if (i >= s.size() || s[i] != c)
                    return first.substr(0, i);
        }

        return first;
    }
};