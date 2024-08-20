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
        ListNode* temp = new ListNode(-1), *tHead = temp;
        temp->next = head;
        while(temp){
            while(temp && temp->next && temp->next->val == val) temp->next = temp->next->next;
            temp = temp->next;
        }
        return tHead->next;
    }
};