class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;

        result.reserve(word1.size() + word2.size());

        int index1 = 0;
        int index2 = 0;

        while (index1 < word1.size() && index2 < word2.size())
        {
            result.push_back(word1[index1]);
            result.push_back(word2[index2]);

            index1++;
            index2++;
        }

        while (index1 < word1.size())
        {
            result.push_back(word1[index1]);
            index1++;
        }

        while (index2 < word2.size())
        {
            result.push_back(word2[index2]);
            index2++;
        }

        return result;
    }
};