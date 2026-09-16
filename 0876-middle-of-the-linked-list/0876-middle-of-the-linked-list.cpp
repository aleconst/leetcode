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
    ListNode* middleNode(ListNode* head) {
        ListNode* num = head;
        int counter = 0;

        while (num != nullptr)
        {
            counter++;
            num = num -> next;
        }

        counter /= 2;

        while (counter)
        {
            head = head -> next;
            counter--;
        }

        return head;
    }
};