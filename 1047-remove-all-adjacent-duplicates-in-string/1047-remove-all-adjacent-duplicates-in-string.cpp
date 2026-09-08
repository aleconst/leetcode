class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string answer;

        answer.reserve(s.size());

        for (const char& c : s)
        {
            if (stk.empty())
                stk.push(c);
            else
            {
                if (stk.top() == c)
                    stk.pop();
                else
                    stk.push(c);
            }
        }

        while (!stk.empty())
        {
            answer.push_back(stk.top());
            stk.pop();
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};