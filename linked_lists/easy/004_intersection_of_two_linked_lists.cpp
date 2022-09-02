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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA){
            ListNode* currentB = headB;
            while(currentB){
                if(currentB==headA){
                    return currentB;
                }
                else{
                    currentB=currentB->next;
                }
            }
            headA = headA->next;
        }
        return nullptr;
    }
};

// Alternate approach: O(m+n) time and O(1) space
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        while(ptrA != ptrB){
            ptrA = (ptrA==nullptr) ? headB: ptrA->next;
            ptrB = (ptrB==nullptr) ? headA: ptrB->next;
        }
        return ptrA;
    }
};