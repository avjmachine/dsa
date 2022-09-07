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
        ListNode* result_head = nullptr;
        ListNode* result_current = nullptr;
        int carry = 0;
        
        while(l1 || l2 || carry) {
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            int sum_val = v1 + v2 + carry;
            if(!result_head) {
                result_head = new ListNode(sum_val % 10);
                result_current = result_head;
            }
            else {
                result_current->next = new ListNode(sum_val % 10);
                result_current = result_current->next;
            }
            carry = sum_val/10;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return result_head;
    }
};
