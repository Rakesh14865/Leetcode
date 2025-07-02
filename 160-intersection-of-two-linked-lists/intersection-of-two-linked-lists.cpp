/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* top = headA;
        ListNode* btm = headB;
        int lt = 0;
        while (top) {
            top = top->next;
            lt++;
        }
        top = headA;
        int lb = 0;
        while (btm) {
            btm = btm->next;
            lb++;
        }
        btm = headB;

        if (lb > lt) {
            for (int i = 0; i < abs(lb - lt); i++) {
                btm = btm->next;
            }
        }
            else {
                for (int i = 0; i < abs(lb - lt); i++) {
                    top = top->next;
                }
            }

        while(top){
            
            if(top==btm) return top;

            top=top->next;
            btm=btm->next;

        }
        return top;
        
    }
};