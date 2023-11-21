/*************************************************************************
	> File Name: DList.h
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Nov 2023 09:24:32 PM CST
 ************************************************************************/

#ifndef _DLIST_H
#define _DLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDataType;

typedef struct ListNode{
    struct ListNode *next, *prev;
    LTDataType val;
}LTNode;

LTNode * LTInit();
void LTPrint(LTNode *phead);
void LTPushBack(LTNode *phead, LTDataType x);
void LTPopBack(LTNode *phead);
void LTPushFront(LTNode *phead, LTDataType x);
void LTPopFront(LTNode *phead);
LTNode *LTFind(LTNode *phead, LTDataType x);
void LTInsert(LTNode *pos, LTDataType x);
void LTErase(LTNode *pos);
void LTDestroy(LTNode *phead);

#endif
