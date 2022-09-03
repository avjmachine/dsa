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
        int listsize = 0;
        ListNode* current = head;
        while(current){
            listsize++;
            current = current->next;
        }
        current=head;
        int index_to_remove=listsize-n; //0-index

        if(index_to_remove==0){
            head=head->next;
            delete current;
            return head;
        }
        for(int i=1; i<index_to_remove;i++){
            current = current->next;
        }
        ListNode* temp = current->next;
        current->next = current->next? current->next->next : nullptr;
        delete temp;
       
        return head;
    }
};

// Alternate approach TODO - same O(n), previous approach is two pass, whereas this is one pass 