/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    //fast != NULL && fast->next != NULL是循环继续的条件。 fast == NULL || fast->next == NULL是循环结束的条件
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return true;
    }
    return false;
}