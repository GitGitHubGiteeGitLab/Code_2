/*************************************************************************
	> File Name: DList.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Nov 2023 09:26:39 PM CST
 ************************************************************************/

#include "DList.h"


static LTNode *CreateNode(LTDataType x){
    LTNode *newnode = (LTNode *)malloc(sizeof(LTNode));
    if(newnode == NULL){
        perror("malloc fail");
        exit(-1);
    }
    newnode->val = x;
    newnode->next = newnode->prev = NULL;
    return newnode;
}


LTNode* LTInit(){
    LTNode *phead = CreateNode(-1);
    phead->prev = phead->next = phead;
    return phead;
}

void LTPrint(LTNode *phead){
    assert(phead);
    LTNode *cur = phead->next;
    printf("hnode<->");
    while(cur != phead){
        printf("%d<->", cur->val);
        cur = cur->next;
    }
    printf("hnode\n");
    return;
}

void LTPushBack(LTNode *phead, LTDataType x){
    //if list is empty, we don't use LTNode **
    //tail is phead->prev
    assert(phead);
    /*LTNode *tail = phead->prev;
    LTNode *newnode = CreateNode(x);

    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = phead;
    phead->prev = newnode;*/
    LTInsert(phead, x);
}

void LTPopBack(LTNode *phead){
    assert(phead);
    //空表不可以删除
    assert(phead->next != phead);

    /*LTNode *tail = phead->prev;
    LTNode *tailPrev = tail->prev;

    free(tail);
    tailPrev->next = phead;
    phead->prev = tailPrev;*/
    LTErase(phead->prev);
    return;
}

void LTPushFront(LTNode *phead, LTDataType x){
    assert(phead);
    /*LTNode *newnode = CreateNode(x);
    LTNode *first = phead->next; 
    
    newnode->next = first;
    newnode->prev = phead;
    phead->next = newnode;
    first->prev = newnode;*/
    LTInsert(phead->next, x);
    return; 
}

void LTPopFront(LTNode *phead){
    assert(phead);
    assert(phead->next != phead);
    /*LTNode *first = phead->next;
    LTNode *second = first->next;
   
    second->prev = phead;
    phead->next = second;
    free(first);
    first = NULL;*/
    LTErase(phead->next);
    return;
}

LTNode *LTFind(LTNode *phead, LTDataType x){
    assert(phead);
    LTNode *cur = phead->next;
    while(cur != phead){
        if(cur->val == x){
            return cur;
        }
        cur = cur->next;
    }
    return NULL; 
}

void LTInsert(LTNode *pos, LTDataType x){
    assert(pos);
    LTNode *newnode = CreateNode(x);
    LTNode *posPrev = pos->prev;
    
    newnode->prev = posPrev;
    newnode->next = pos;
    posPrev->next = newnode;
    pos->prev = newnode;
    return;
}

void LTErase(LTNode *pos){
    assert(pos);
    LTNode *posNext = pos->next;
    LTNode *posPrev = pos->prev;

    posPrev->next = posNext;
    posNext->prev = posPrev;
    free(pos);
}

void LTDestroy(LTNode *phead){
    assert(phead);
    LTNode *cur = phead->next;
    while(cur != phead){
        LTNode *next = cur->next;
        free(cur);
        cur = next;
    }
    free(phead);
    return;
}
