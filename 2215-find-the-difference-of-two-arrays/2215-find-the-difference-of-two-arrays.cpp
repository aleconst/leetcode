class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);

        unordered_set<int> set1;
        unordered_set<int> set2;

        for (const int& val : nums1)
            set1.insert(val);

        for (const int& val : nums2)
            set2.insert(val);

        for (const int& val : set1)
            if (!set2.count(val))
                answer[0].push_back(val);

        for (const int& val : set2)
            if (!set1.count(val))
                answer[1].push_back(val);

        return answer;
    }
};