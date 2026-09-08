class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for (const string& c : operations)
        {
            if (c == "+")
            {
                int last = stk.top();
                
                stk.pop();

                int new_score = last + stk.top();
                
                stk.push(last);
                stk.push(new_score);
            }
            else if (c == "D")
                stk.push(2 * stk.top());
            else if (c == "C")
                stk.pop();
            else
                stk.push(stoi(c));
        }

        int sum = 0;

        while (!stk.empty())
        {
            sum += stk.top();
            stk.pop();
        }

        return sum;
    }
};