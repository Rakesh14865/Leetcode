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
    ListNode* sortList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;

        vector<int> nums;
        ListNode* temp=head;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        sort(nums.begin(),nums.end());

        temp=head;
        for(int i=0;i<nums.size();i++){
            temp->val=nums[i];
            temp=temp->next;
        }
        return head;
    }
};