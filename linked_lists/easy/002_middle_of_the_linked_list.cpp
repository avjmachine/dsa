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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow_ptr = head;
        ListNode* fast_ptr = head;
        while (fast_ptr != nullptr && fast_ptr->next != nullptr){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        return slow_ptr;
    }

//alternate approach using conversion to array
    ListNode* middleNode_convert_array_approach(ListNode* head) {
        vector<ListNode*> list_vec {head};
        while (list_vec.back()->next != nullptr) {
            list_vec.push_back(list_vec.back()->next);
        }
        return list_vec[list_vec.size()/2];
    }
};