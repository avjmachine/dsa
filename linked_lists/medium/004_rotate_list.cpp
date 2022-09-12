class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head==nullptr || head->next==nullptr || k==0) {
            return head;
        }
        
        ListNode* current = head;
        ListNode* tail = nullptr;
        int size = 0;
        
        while(current) {
            tail = current;
            current = current->next;
            size++;    
            }
        
        if (size==k || k%size==0) {
            return head;
        }
    
        else {
            int skip = (size > k) ? size - k : size - (k%size);
            current = head;
            tail->next = head;
            while(skip>1) {
                current = current->next;
                skip --;
            }
            head = current->next;
            current->next = nullptr;
        }

        return head;
    }
};