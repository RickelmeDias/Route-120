// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
*/

bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head;
    
    while (fast!=nullptr and fast->next!=nullptr) { 
        slow=slow->next;
        fast=(fast->next)->next;
        
        if (slow==fast) return true;
    } 
    
    return false;
}