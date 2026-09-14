class Solution {
public:
    bool isVowel (const char& c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;

        return false;
    }

    int maxVowels(string s, int k) {
        int maxim = 0;

        for (int i = 0; i < k; i++)
            if (isVowel(s[i]))
                maxim++;

        if (maxim == k)
            return k;
        
        int contor = maxim;

        for (int i = k; i < s.size(); i++)
        {
            if (isVowel(s[i - k]))
                contor--;

            if (isVowel(s[i]))
                contor++;

            if (contor == k)
                return k;

            if (maxim < contor)
                maxim = contor;
        }

        return maxim;
    }
};