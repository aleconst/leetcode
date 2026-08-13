class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0;
        int right = m * n - 1;

        while (left <= right)
        {
            int middle = left + (right - left) / 2;

            if (matrix[middle / n][middle % n] == target)
                return true;
            else if (matrix[middle / n][middle % n] > target)
                right = middle - 1;
            else
                left = middle + 1;
        }

        return false;
    }
};