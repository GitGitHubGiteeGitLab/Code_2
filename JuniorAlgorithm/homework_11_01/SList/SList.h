/*************************************************************************
	> File Name: SList.h
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2023 01:48:54 PM CST
 ************************************************************************/

#ifndef _SLIST_H
#define _SLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLNDataType;
typedef struct SLNode{
    SLNDataType val;
    struct SLNode *next;
}SLNode;

void SLTPrint(SLNode *phead);

SLNode* CreateNode(SLNDataType x);
void SLTPushBack(SLNode **pphead, SLNDataType x);
void SLTPushFront(SLNode **pphead, SLNDataType
x);

void SLTPopBack(SLNode **pphead);
void SLTPopFront(SLNode **pphead);

SLNode* SLTFind(SLNode *pphead, SLNDataType x);
void SLTInsert(SLNode **pphead, SLNode* addr,SLNDataType x);
void SLTInsertAfter(SLNode *addr, SLNDataType x);

void SLTErase(SLNode** pphead, SLNode *addr);
void SLTEraseAfter(SLNode *addr);

void SLTDestroy(SLNode **pphead);
#endif
