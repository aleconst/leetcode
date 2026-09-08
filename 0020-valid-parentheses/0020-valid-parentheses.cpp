class Solution {
public:
    bool isValid(const string& text)
    {
        stack<char> stk;

        for (const char& c : text)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                stk.push(c);
            }
            else
            {
                if (stk.empty())
                    return false;

                if (c == ')' && stk.top() != '(')
                    return false;

                if (c == ']' && stk.top() != '[')
                    return false;

                if (c == '}' && stk.top() != '{')
                    return false;

                stk.pop();
            }
        }

        return stk.empty();
    }
};