/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 /**
    2 * (L + X) = L + n * C + X（slow进环前，fast已经在环里转了n圈）
    L = n * C - X = (n - 1) * C + (C - X)
    找到环的入口点
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            struct ListNode *cur = head;
            while(cur != slow){
                cur = cur->next;
                slow = slow->next;
            }
            return cur; 
        }
    }
    return NULL;
}