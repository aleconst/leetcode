class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk_s;
        stack<char> stk_t;

        for (const char& c : s)
        {
            if (c == '#')
            {
                if (!stk_s.empty())
                    stk_s.pop();
            }
            else
                stk_s.push(c);
        }

        for (const char& c : t)
        {
            if (c == '#')
            {
                if (!stk_t.empty())
                    stk_t.pop();
            }
            else
                stk_t.push(c);
        }

        while (!stk_s.empty() && !stk_t.empty())
        {
            if (stk_s.top() != stk_t.top())
                return false;

            stk_s.pop();
            stk_t.pop();
        }

        return stk_s.empty() && stk_t.empty();
    }
};