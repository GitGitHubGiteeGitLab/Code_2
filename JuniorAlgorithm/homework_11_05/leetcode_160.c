/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(!headA || !headB)return NULL;
    struct ListNode *curA, *curB;
    curA = headA;
    curB = headB;
    int cntA = 1;
    while(curA->next){
      cntA++;
      curA = curA->next;
    }
    int cntB = 1;
    while(curB->next){
      cntB++;
      curB = curB->next;
    }
    //判相交
    if(curB != curA)return NULL;
    
    //找交点
    //长的先走差距步
    curA = headA;
    curB = headB;
    if(cntA > cntB){
      int cnt = cntA - cntB;
      while(cnt--)curA = curA->next;
    }else{
      int cnt = cntB - cntA;
      while(cnt--)curB = curB->next;
    }
  
    //再同时走
    while(curA != curB){
      curA = curA->next;
      curB = curB->next;
    }
    return curA;
 
}