class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;

        for (int i = 0; i < sentence.size(); i++)
            letters.insert(sentence[i]);

        for (char c = 'a'; c <= 'z'; c++)
            if (letters.find(c) == letters.end())
                return false;

        return true;
    }
};