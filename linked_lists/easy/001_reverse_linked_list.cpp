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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = nullptr;
        ListNode* tmp;
        
        while(head != nullptr){
            tmp = head->next;
            head->next = prev;
            
            prev = head;
            head = tmp;
        }
        return prev;
    }        

//alternate recursive approach
    ListNode* reverseList(ListNode* head) {
   
        if (head == nullptr || head->next ==nullptr)
            return head;
        
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        
        return newHead;

    }
};