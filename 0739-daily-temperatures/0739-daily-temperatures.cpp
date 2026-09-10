class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stk;
        vector<int> answer(temperatures.size());

        for (int i = static_cast<int>(temperatures.size() - 1); i >= 0; i--)
        {
            while (!stk.empty() && temperatures[stk.top()] <= temperatures[i])
                stk.pop();

            if (stk.empty())
                answer[i] = 0;
            else
                answer[i] = abs(stk.top() - i);

            stk.push(i);
        }

        return answer;
    }
};