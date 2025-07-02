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
        if (!head || !head->next) {
            if (n == 1) {
                delete head;
                return nullptr;
            }
            return head;
        }

        ListNode* temp = head;
        int count = 1;
        while (temp->next) {
            temp = temp->next;
            count++;
        }

        int remove = count - n;
        if (remove == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        ListNode* prev = head;
        for (int i = 1; i < remove; ++i) {
            prev = prev->next;
        }

        ListNode* toDelete = prev->next;
        prev->next = prev->next->next;
        delete toDelete;

        return head;
    }
};
