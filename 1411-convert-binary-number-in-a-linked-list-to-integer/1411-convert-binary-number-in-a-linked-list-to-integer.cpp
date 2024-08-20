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
    ListNode* rev(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp = head, *prev = nullptr, *next;
        while(temp){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        int pow = 1, sum = 0;
        ListNode* temp = rev(head);
        while(temp){
            sum += temp->val * pow;
            pow *= 2; temp = temp->next;
        }
        return sum;
    }
};