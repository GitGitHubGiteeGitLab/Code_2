/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;


struct ListNode* middleNode(struct ListNode* head){
    ListNode *fast, *slow;//快慢指针
    fast = slow = head;
    while(fast && fast->next){//fast & fast->next有一个为空，slow就走到了中间，这包括的奇数个和偶数个结点两种情况。
        slow = slow->next;
        fast = fast->next->next;//只要还有一个结点就能够走两步，第一步走到该节点， 第二步走到结点的next指针所指向的空间，可能时节点空间，也可能时地址为0的空间(NULL)
    }
    return slow;
}