/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */
/*A->B->C A->A'->B->B'->C->C'
  S->S'
*/
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
    if(head == NULL)return NULL;
    Node *cur = head;
    //S->S', 值拷贝，原链表每一个结点后加一个结点。
    while(cur){
        Node *newnode = (Node *)malloc(sizeof(Node));
        newnode->val = cur->val;
        newnode->next = cur->next;
        cur->next = newnode;
        cur = newnode->next;
    }
    cur = head;
    //random指针拷贝
    while(cur){
        Node *nextnode = cur->next;
        //分random == NULL和random != NULL两种情况考虑。
        nextnode->random = cur->random == NULL ? NULL : cur->random->next;
        cur = nextnode->next;
    }
    //断链-->恢复原链表和形成新链表
    Node *newhead = NULL, *tail = NULL;
    cur = head;
    while(cur){
        if(newhead == NULL){
            Node *tmp = cur->next->next;
            newhead = tail = cur->next;
            cur->next = tmp;
            cur = cur->next;
            if(cur == NULL)break;//只有一个结点
            tail->next = cur->next;
            tail = tail->next;
        }else{
            Node *tmp = cur->next->next;
            cur->next = tmp;
            cur = cur->next;
            if(cur == NULL)break;//到了最后一个结点
            tail->next = cur->next;
            tail = tail->next;           
        }
    }
    tail->next = NULL;
    return newhead;
}