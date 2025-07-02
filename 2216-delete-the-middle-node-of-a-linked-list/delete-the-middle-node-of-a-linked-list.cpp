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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        ListNode* dummy=new ListNode(0,head);
        ListNode* fast=head;
        ListNode* slow=dummy;

        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* del=slow->next;

        slow->next=slow->next->next;
        delete del;
        return dummy->next;

    }
};