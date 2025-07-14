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
    int getDecimalValue(ListNode* head) {
        if(!head->next) return head->val ;
        ListNode* temp=head;
        int result=0;

        while(temp){
            int val =temp->val;
            result=result<<1 | val;
            temp=temp->next;
        }

        return result;
        
    }
};