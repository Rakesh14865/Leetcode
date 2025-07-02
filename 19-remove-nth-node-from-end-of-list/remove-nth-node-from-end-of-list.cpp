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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* left = dummy;
        ListNode* right = dummy;

        for(int i=0;i<=n;i++){
            right=right->next;
        }
        while(right){
            right=right->next;
            left=left->next;
            
        }
        ListNode*del=left->next;
        left ->next=left->next->next;
        delete del;
        
        //  ListNode* result = dummy->next;
        // delete dummy;
        
        return dummy-> next;
    }
};