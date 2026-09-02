class Solution {
public:
    bool isPalindrome(string s) {
        
        if (!s.size())
            return 1;

        int left = 0;
        int right = s.size() - 1;
        
        while (left < right)
        {
            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;
            
            if (tolower(s[left]) != tolower(s[right]))
                return 0;

            left++;
            right--;
        }

        return 1;
    }
};