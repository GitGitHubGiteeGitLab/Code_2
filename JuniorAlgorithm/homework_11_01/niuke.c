/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pListHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    // write code here
    struct ListNode *fast = pListHead, *slow = pListHead;
    //先走k步，到第k+1个结点
    while(k--){
        if(fast == NULL)
            return NULL;
        fast = fast->next;
    }

    //fast走到NULL, 到第0个结点
    while(fast){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}