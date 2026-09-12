class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = static_cast<int> (letters.size()) - 1;
        int pos = 0;

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;

            if (letters[mid] > target)
            {
                pos = mid;
                right = mid - 1;
            }
            else   
                left = mid + 1;
        }

        return letters[pos];
    }
};