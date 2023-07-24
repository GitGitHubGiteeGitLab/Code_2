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
        return;
    }
    //把xize - 1个元素由x->data借由z->data转到y->data
    Move(xsize - 1, x, z, y);
    //再把最后一个从x->data转到z->data
    Move(1, x, y, z);
    //把xize - 1个元素由y->data借由x->data转到z->data
    Move(xsize - 1, y, x, z);

}



/*
*函数的语义信息，A借助B将A中所有元素按规则移到C上
*/
void hanota(int* A, int ASize, int* B, int BSize, int** C, int* CSize) {
    if (!ASize)return;
    myStack x, y, z;//不用申请堆空间,函数结束直接从栈空间自动释放
    x.data = A, x.size = ASize;
    y.data = malloc(sizeof(int) * MAX_N), y.size = 0;
    z.data = malloc(sizeof(int) * MAX_N), z.size = 0;//z销毁是z->data的空间，是指针变量空间，而不是申请的堆空间
    Move(ASize, &x, &y, &z);
    *C = z.data, * CSize = z.size;//关键一步，思考为什么不能写C = &(z.data), CSize = &(z.size);
    //*p = a,改变了p所指向地址的值， p = &a, 改变了p指向的地址
    free(y.data);
}