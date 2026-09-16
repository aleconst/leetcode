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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* previous;

        while (head != nullptr && 
                head -> val == val)
        {
            previous = head;
            head = head -> next;
            previous -> next = nullptr;
        }

        previous = head;

        while (head != nullptr)
        {
            if (head -> next != nullptr && 
                head -> next -> val == val)
            {
                head -> next = head -> next -> next;
            }
            else
                head = head -> next;
        }

        return previous;
    }
};