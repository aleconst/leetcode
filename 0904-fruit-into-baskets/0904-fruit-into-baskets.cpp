class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int, int> mp;
        int maxim = 0;
        int left = 0;

        for (int right = 0; right < fruits.size(); right++)
        {
            mp[fruits[right]]++;

            while (mp.size() > 2)
            {
                mp[fruits[left]]--;

                if (!mp[fruits[left]])
                    mp.erase(fruits[left]);

                left++;
            }

            maxim = max (maxim, right - left + 1);
        }

        return maxim;
    }
};