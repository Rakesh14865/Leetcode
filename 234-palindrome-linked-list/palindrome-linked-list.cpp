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
        
        if(head==NULL || head-> next==NULL) return true;

        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* prev=NULL;

        while(slow){
            ListNode*nxt=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nxt;
        }

        ListNode * left=head;
        ListNode * right=prev;

        while(right){
            if(left->val != right->val) return false;
            left=left->next;
            right=right->next;
        }
        
    return true;


    }
};