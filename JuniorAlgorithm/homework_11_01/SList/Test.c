/*************************************************************************
	> File Name: Test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2023 01:49:03 PM CST
 ************************************************************************/

#include "SList.h"

void TestSLT1(){
    SLNode *plist = NULL;
    SLTPushBack(&plist, 1);
    SLTPushBack(&plist, 2);
    SLTPushBack(&plist, 3);
    SLTPushBack(&plist, 4);
    SLTPrint(plist);

    SLTPopBack(&plist);
    SLTPrint(plist);

    SLTPopBack(&plist);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
    
    
    //SLTPopBack(&plist);
    //SLTPrint(plist);
    SLTDestroy(&plist);
    return;
}

void TestSLT2(){
    SLNode *plist = NULL;
    SLTPushFront(&plist, 1);
    SLTPushFront(&plist, 2);
    SLTPushFront(&plist, 3);
    SLTPushFront(&plist, 4);
    SLTPrint(plist);

    SLTPopFront(&plist);
    SLTPrint(plist);
    SLTDestroy(&plist);
    return;
}

void TestSLT3(){
    SLNode *plist = NULL;
    SLTPushBack(&plist, 1);
    SLTPushBack(&plist, 2);
    SLTPushBack(&plist, 3);
    SLTPushBack(&plist, 4);
    SLTPrint(plist);

    SLTInsert(&plist, SLTFind(plist, 4), 5);
    SLTPrint(plist);

    SLTInsertAfter(SLTFind(plist, 4), 6);
    SLTPrint(plist);

    SLTErase(&plist, SLTFind(plist, 4));
    SLTPrint(plist);
    
    SLTEraseAfter(SLTFind(plist, 5));
    SLTPrint(plist);

    SLTDestroy(&plist);
    return;
}


int main(){
    //TestSLT1();
    //TestSLT2();
    TestSLT3();
    return 0;
}
