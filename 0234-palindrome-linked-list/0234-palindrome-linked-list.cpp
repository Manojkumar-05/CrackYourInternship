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
    ListNode* rev(ListNode* temp){
        ListNode* prev = nullptr, *next;
        while(temp){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return  prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return false;
        if(head->next == NULL) return true;
        if(head->next->next == NULL) return head->val == head->next->val;
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *tail = rev(slow), *temp = head;
        while(tail){
            if(temp->val != tail->val) return false;
            // cout << temp->val << "  " << tail->val << endl;
            temp = temp->next; tail = tail->next;
        }
        return true;
    }    
};