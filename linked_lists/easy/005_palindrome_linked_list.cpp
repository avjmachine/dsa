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
        // handle case of just 1 node
        if(head->next == nullptr){
            return true;
        }
        
        // use fast and slow pointes to get to mid of linked list
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // reverse the second half of the linked list
        ListNode* current = slow->next;
        ListNode* prev = nullptr;
        while(current) {
            ListNode* temp = current->next;
            current->next = prev;
            
            prev = current;
            current = temp;
        }
        
        //compare first half and reversed second half element-wise
        while(prev && head){
            if (prev->val != head->val) {
                return false;
            }
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};

// it can be further optimized by reversing the first half during fast+slow traversal
// can be made cleaner by reversing the reversal back to original