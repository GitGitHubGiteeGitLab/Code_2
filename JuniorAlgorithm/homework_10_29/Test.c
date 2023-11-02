#include "SeqList.h"

void TestSL1(){
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPushBack(&sl, 6);
    SLPushBack(&sl, 7);
    SLPushBack(&sl, 8);
    SLPushBack(&sl, 9);
    SLPrint(&sl);

    SLPushFront(&sl, 10);
    SLPushFront(&sl, 20);
    SLPushFront(&sl, 30);
    SLPushFront(&sl, 40);
    SLPrint(&sl);

    SLDestroy(&sl);
}

void TestSL2(){
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPrint(&sl);

    SLPopBack(&sl);
    SLPrint(&sl);

    SLPopBack(&sl);
    SLPopBack(&sl);
    SLPopBack(&sl);
    SLPopBack(&sl);
    SLPrint(&sl);

    SLPushFront(&sl, 10);
    SLPushFront(&sl, 20);
    SLPushFront(&sl, 30);
    SLPushFront(&sl, 40);
    SLPrint(&sl);

    SLDestroy(&sl);
}

void TestSL3(){
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPrint(&sl);

    SLPopFront(&sl);
    SLPrint(&sl);
    
    SLPopFront(&sl);
    SLPrint(&sl);
    
    SLPopFront(&sl);
    SLPrint(&sl);
    
    SLPopFront(&sl);
    SLPrint(&sl);
    
    SLPopFront(&sl);
    SLPrint(&sl);
    
    //SLPopFront(&sl);
    //SLPrint(&sl);
    SLDestroy(&sl);
}

void TestSL4(){
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPrint(&sl); 

    SLInsert(&sl, 2, 20);
    SLPrint(&sl);
    
    SLInsert(&sl, 6, 20);
    SLPrint(&sl);
    
    SLInsert(&sl, 0, 20);
    SLPrint(&sl);
    
    SLInsert(&sl, 10, 20);
    SLPrint(&sl);
    
    SLDestroy(&sl);
}

void TestSL5(){
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPrint(&sl); 
  
    SLErase(&sl, 3);
    SLPrint(&sl);
    
    SLErase(&sl, 3);
    SLPrint(&sl);
    
    SLErase(&sl, 3);
    SLPrint(&sl);

    SLDestroy(&sl);

}

int main(){
    //TestSL1();
    //TestSL2();
    //TestSL3();
    //TestSL4();
    TestSL5();
    return 0;
}
