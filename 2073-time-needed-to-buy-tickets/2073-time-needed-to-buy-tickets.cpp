class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int poz = 0;

        while (q.size() != tickets.size())
        {
            q.push(poz);
            poz++;
        }

        int seconds = 0;

        while (tickets[k])
        {
            int index = q.front();
            q.pop();

            tickets[index]--;
            seconds++;

            if (tickets[index] > 0)
                q.push(index);
        }

        return seconds;
    }
};