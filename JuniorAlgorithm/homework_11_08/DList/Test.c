/*************************************************************************
	> File Name: Test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Nov 2023 09:37:07 PM CST
 ************************************************************************/

#include "DList.h"

void Test1(){
	LTNode *phead = LTInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPushBack(phead, 5);
	LTPrint(phead);

	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	//LTPopBack(phead);
    LTDestroy(phead);
}

void Test2(){
	LTNode *phead = LTInit();
	LTPushFront(phead, 1);
	LTPushFront(phead, 2);
	LTPushFront(phead, 3);
	LTPushFront(phead, 4);
	LTPushFront(phead, 5);
	LTPrint(phead);

	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	//LTPopBack(phead);
    LTDestroy(phead);
}

void Test3(){
    LTNode *plist = LTInit();
    LTPushBack(plist, 1);
    LTPushBack(plist, 2);
    LTPushBack(plist, 3);
    LTPushBack(plist, 5);
    LTPushBack(plist, 4);

    LTPrint(plist);
    LTNode* pos = LTFind(plist, 3);
    if(pos){
        pos->val *= 10;
    }
    LTPrint(plist);

    LTInsert(plist, -1);
    LTPrint(plist);

    LTInsert(plist, -2);
    LTPrint(plist);
    
    pos = LTFind(plist, 30);
    if(pos){
        LTErase(pos);
        pos = NULL;
    }
    LTPrint(plist);
    LTDestroy(plist);
    plist = NULL;
}

int main(){
	printf("--------------------------\n");
    Test1();
	printf("--------------------------\n");
	Test2();
	printf("--------------------------\n");
    Test3();
    return 0;
}
