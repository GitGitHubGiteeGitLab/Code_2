/*************************************************************************
	> File Name: SList.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2023 01:48:46 PM CST
 ************************************************************************/

#include "SList.h"

void SLTPrint(SLNode *phead){
    SLNode *cur = phead;
    while(cur){
        printf("%d->", cur->val);
        cur = cur->next;
    }
    printf("NULL\n");
    return;
}

SLNode* CreateNode(SLNDataType x){
    SLNode* newnode = (SLNode *)malloc(sizeof(SLNode));
    if(newnode == NULL){
        perror("malloc fail");
        exit(-1);
    }
    newnode->val = x;
    newnode->next = NULL;
    return newnode;
}

void SLTPushBack(SLNode **pphead, SLNDataType x){
    SLNode *newnode = CreateNode(x);
    if(*pphead == NULL){
        *pphead = newnode;
        return;
    }
    SLNode *cur = *pphead;
    while(cur->next)cur = cur->next;
    cur->next = newnode;
    return;
}

void SLTPushFront(SLNode **pphead, SLNDataType x){
    SLNode *newnode = CreateNode(x);
    newnode->next = *pphead;
    *pphead = newnode;
    return;
}

void SLTPopBack(SLNode **pphead){
    assert(*pphead);
    if((*pphead)->next == NULL){
        free(*pphead);
        *pphead = NULL;
        return;
    }
    SLNode *prev = NULL, *cur = *pphead;
    while(cur->next){
        prev = cur;
        cur = cur->next;
    }
    free(cur);
    prev->next = NULL;
    return;
}

void SLTPopFront(SLNode **pphead){
    assert(*pphead);
    SLNode *tmp = *pphead;
    *pphead = tmp->next;
    free(tmp);
    return;
}

SLNode *SLTFind(SLNode *phead, SLNDataType x){
   SLNode *cur = phead;
   while(cur){
       if(cur->val == x)return cur;
       cur = cur->next;
   }
   return NULL;
}

void SLTInsert(SLNode **pphead, SLNode* addr, SLNDataType x){
    assert(pphead && *pphead && addr);

    if(*pphead == addr){
        SLTPushFront(pphead, x);
    }else {
        SLNode *prev = *pphead;
        while(prev->next != addr)prev = prev->next;
        assert(prev);
        SLNode *newnode = CreateNode(x);
        newnode->next = addr;
        prev->next = newnode;
    }
    return;
}

void SLTInsertAfter(SLNode *addr, SLNDataType x){
    assert(addr);
    SLNode *newnode = CreateNode(x);
    newnode->next = addr->next;
    addr->next = newnode;
    return;
}

void SLTErase(SLNode **pphead, SLNode *addr){
    assert(*pphead && addr);
    
    if(*pphead == addr){
        *pphead = (*pphead)->next;
        free(addr);
    }else{
        SLNode *prev = *pphead;
        while(prev->next != addr)prev = prev->next;
        assert(prev);
        prev->next = addr->next;
        free(addr);
        addr = NULL;
    }
    return;
}

void SLTEraseAfter(SLNode *addr){
    assert(addr && addr->next);
    SLNode *addrNext = addr->next;
    addr->next = addrNext->next;
    free(addrNext);
    addrNext = NULL;
    return;
}

void SLTDestroy(SLNode **pphead){
    assert(*pphead);

    SLNode *cur = *pphead;
    SLNode *curNext;
    while(cur){
        curNext = cur->next;
        free(cur);
        cur = curNext;
    }
    *pphead = NULL;
}
