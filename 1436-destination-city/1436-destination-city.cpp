class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string lastPlace = paths[0][1];

        for (int i = 1; i < paths.size(); i++)
            for (int j = 0; j < paths.size(); j++)
                if (lastPlace == paths[j][0])
                    lastPlace = paths[j][1];

        return lastPlace;
    }
};