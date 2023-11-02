#ifndef _SEQLIST_H
#define _SEQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct{
   SLDataType *a;
   int size, capacity;
}SL;

void SLInit(SL *psl);

void SLDestroy(SL *psl);

void SLPrint(SL *psl);

void SLCheckCapacity(SL *psl);

void SLPushBack(SL *psl, SLDataType x);

void SLPushFront(SL *psl, SLDataType x);

void SLInsert(SL *psl, int idx, SLDataType x);

void SLPopBack(SL *psl);

void SLPopFront(SL *psl);

void SLErase(SL *psl, int idx);

int SLFind(SL *psl, SLDataType x);
#endif
