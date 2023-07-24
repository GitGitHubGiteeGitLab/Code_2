//递归
//A,B,C的数据结构--Stack

#define MAX_N 14
typedef struct myStack {
    int* data;
    int size;
}myStack;
//函数的语义信息，x->data借助y->data将x->data中所有元素按规则移到z->data上
void Move(int xsize, myStack* x, myStack* y, myStack* z) {
    if (xsize == 1) {
        z->data[z->size++] = x->data[--x->size];
    }
    else {
        //把xize - 1个元素由x->data借由z->data转到y->data
        Move(xsize - 1, x, z, y);
        //再把最后一个从x->data转到z->data
        Move(1, x, y, z);
        //把xize - 1个元素由y->data借由x->data转到z->data
        Move(xsize - 1, y, x, z);
    }
    return;
}



/*
*函数的语义信息，A借助B将A中所有元素按规则移到C上
*/
void hanota(int* A, int ASize, int* B, int BSize, int** C, int* CSize) {
    if (!ASize)return;
    myStack* x = malloc(sizeof(myStack));
    myStack* y = malloc(sizeof(myStack));
    myStack* z = malloc(sizeof(myStack));
    x->data = A, x->size = ASize;
    y->data = malloc(sizeof(int) * MAX_N), y->size = 0;
    z->data = malloc(sizeof(int) * MAX_N), z->size = 0;
    Move(ASize, x, y, z);
    C = &z->data, CSize = &z->size;//偷梁换柱了
    //高露:
    /*但是像这种题目，C是给定你的一块固定的空间

        高露 :
    想让你实现的效果就是把数据转移到我的这块开好的空间里

        高露 :
    而不是希望你去让我把这个指针，重新去指向别的空间

       诸子百家 :
    没想到这么原因简单😂

        高露 :
    这可能是这种编程题的一个隐含要求

        高露 :
    一般来说，这种尽量都是改值，不是改指向*/

    free(x), free(y->data), free(y);
}