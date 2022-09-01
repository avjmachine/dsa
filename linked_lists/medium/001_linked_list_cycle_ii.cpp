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
    ListNode *detectCycle(ListNode *head) {
        
        if (head == nullptr){
            return nullptr;
        }
        
        ListNode *fastPtr = head;
        ListNode *slowPtr = head;        
        
        while(fastPtr->next != nullptr && fastPtr->next->next != nullptr){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if (fastPtr == slowPtr){
                // reset slowPtr
                slowPtr = head;
                while (slowPtr != fastPtr){
                    slowPtr = slowPtr->next;
                    fastPtr = fastPtr->next;
                }
                return slowPtr;
            }
        }
        
        return nullptr;
    }
};

// TODO alternate approach with next ptr pointing to temp node 