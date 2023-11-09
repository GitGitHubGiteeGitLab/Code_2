/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL)return head;//0个结点
    ListNode new_head, *p = &new_head;//虚拟头节点
    p->next = head;
    while(p && p->next){//p和p->next一个为空就结束
        ListNode *q = p->next;//q去探路
        if(q->val == val){
            p->next = q->next;
            free(q);
            continue;
        }
        p = q;
    }
    return new_head.next;
}