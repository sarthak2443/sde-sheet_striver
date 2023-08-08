class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev_node = NULL;
        ListNode* current_node = head;
        ListNode* next_node;
       
        while(current_node) {

            next_node = current_node->next;
            current_node->next = prev_node;
            
            prev_node = current_node;
            current_node = next_node;
        }

        head = prev_node;
        return head;
    }
};
