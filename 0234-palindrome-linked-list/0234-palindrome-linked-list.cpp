/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        stack <int> stk;

        while (slow != nullptr)
        {
            stk.push(slow -> val);
            slow = slow -> next;
        }
        
        slow = head;

        while (fast != nullptr &&
                fast -> next != nullptr)
        {
            if (slow -> val != stk.top())
                return false;

            stk.pop();
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return true;
    }
};