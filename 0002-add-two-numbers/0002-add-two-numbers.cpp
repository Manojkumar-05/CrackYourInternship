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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(), *temp = head; 
        int rem = 0, value = 0;
        while(l1 && l2){
            temp->next = new ListNode(); temp = temp->next;
            value = (l1->val + l2->val + rem);
            rem = value / 10;
            temp->val = value % 10;
            l1 = l1->next; l2 = l2->next;
        }
        while(l1){
            temp->next = new ListNode(); temp = temp->next;
            value = (l1->val + rem);
            rem = value / 10;
            temp->val = value % 10;
            l1 = l1->next; 
        }
        while(l2){
            temp->next = new ListNode(); temp = temp->next;
            value = (l2->val + rem);
            rem = value / 10;
            temp->val = value % 10;
            l2 = l2->next; 
        }
        if(rem) temp->next = new ListNode(rem); 
        return head->next;
    }
};