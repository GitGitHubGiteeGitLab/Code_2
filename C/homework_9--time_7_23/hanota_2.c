//�ݹ�
//A,B,C�����ݽṹ--Stack

#define MAX_N 14
typedef struct myStack {
    int* data;
    int size;
}myStack;
//������������Ϣ��x->data����y->data��x->data������Ԫ�ذ������Ƶ�z->data��
void Move(int xsize, myStack* x, myStack* y, myStack* z) {
    if (xsize == 1) {
        z->data[z->size++] = x->data[--x->size];
        return;
    }
    //��xize - 1��Ԫ����x->data����z->dataת��y->data
    Move(xsize - 1, x, z, y);
    //�ٰ����һ����x->dataת��z->data
    Move(1, x, y, z);
    //��xize - 1��Ԫ����y->data����x->dataת��z->data
    Move(xsize - 1, y, x, z);

}



/*
*������������Ϣ��A����B��A������Ԫ�ذ������Ƶ�C��
*/
void hanota(int* A, int ASize, int* B, int BSize, int** C, int* CSize) {
    if (!ASize)return;
    myStack x, y, z;//��������ѿռ�,��������ֱ�Ӵ�ջ�ռ��Զ��ͷ�
    x.data = A, x.size = ASize;
    y.data = malloc(sizeof(int) * MAX_N), y.size = 0;
    z.data = malloc(sizeof(int) * MAX_N), z.size = 0;//z������z->data�Ŀռ䣬��ָ������ռ䣬����������Ķѿռ�
    Move(ASize, &x, &y, &z);
    *C = z.data, * CSize = z.size;//�ؼ�һ����˼��Ϊʲô����дC = &(z.data), CSize = &(z.size);
    //*p = a,�ı���p��ָ���ַ��ֵ�� p = &a, �ı���pָ��ĵ�ַ
    free(y.data);
}