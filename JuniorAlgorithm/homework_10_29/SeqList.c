#include "SeqList.h"

void SLInit(SL *psl){
    assert(psl);//有效地址
    psl->a = NULL;
    psl->size = 0;
    psl->capacity = 0;
    return;
}

void SLDestroy(SL *psl){
    assert(psl);

    if(psl->a != NULL){
        free(psl->a);
        psl->a = NULL;
        psl->size = 0;
        psl->capacity = 0;
    }
    return;
}


void SLPrint(SL *psl){
    assert(psl);
    for(int i = 0; i < psl->size; i++){
        printf("%d ", psl->a[i]);
    }
    printf("\n");
}

void SLCheckCapacity(SL *psl){
    assert(psl);
    
    if(psl->size == psl->capacity){
        int newCapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;  
        SLDataType *tmp = (SLDataType *)realloc(psl->a, newCapacity * sizeof(SLDataType));
        if(tmp == NULL){
            perror("realloc failed");
            return;
        }
        psl->a = tmp;
        psl->capacity = newCapacity;
    }
    return;
}

void SLPushBack(SL *psl, SLDataType x){
    assert(psl);
    SLCheckCapacity(psl);
    psl->a[psl->size++] = x;
    return;
}

void SLPushFront(SL *psl, SLDataType x){
    assert(psl);
    SLCheckCapacity(psl);
    
    int end = psl->size - 1;
    while(end >= 0){
        psl->a[end + 1] = psl->a[end];
        --end;
    }
    psl->a[0] = x;
    psl->size++;
    return;
}

void SLInsert(SL *psl, int idx, SLDataType x){
    assert(psl);
    assert(idx >= 0 && idx <= psl->size);
    
    int end = psl->size - 1;
    while(end >= idx){
        psl->a[end + 1] = psl->a[end];
        --end;
    }
    psl->a[idx] = x;
    psl->size++;
    return;
}

void SLPopBack(SL *psl){
    assert(psl);
    assert(psl->size > 0);
    psl->size--;
    return;
}

void SLPopFront(SL *psl){
    assert(psl);
    assert(psl->size > 0);
    
    int begin = 1;
    while(begin < psl->size){
        psl->a[begin - 1] = psl->a[begin];
        ++begin;
    }
    psl->size--;
    return;
}

void SLErase(SL *psl, int idx){
    assert(psl);
    assert(idx >= 0 && idx < psl->size);

    int begin = idx + 1;
    while(begin < psl->size){
        psl->a[begin - 1] = psl->a[begin];
        ++begin;
    }
    psl->size--;
    return;
}

int SLFind(SL *psl, SLDataType x){
    assert(psl);
    for(int i = 0; i < psl->size; i++){
        if(psl->a[i] != x)continue;
        return i;
    }
    return -1;
}
