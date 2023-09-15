#include <stdio.h>
#include <string.h>

typedef struct node{
    char name[20];
    int age;
}node;

/**
 * @brief 交换函数
 * @param base: 第一个存储单元的指针
 * @param a:index 
 * @param b:index + 1
 * @param size: 单个元素的大小
*/

void swap(void *base , int a, int b, size_t size){
    char *p = (char *)base + a * size;
    char *q = (char *)base + b * size;
    for(int i = 0; i < size; i++){
        char temp = *q;
        *q = *p;
        *p = temp;
        p++; q++;       
    }
}

/**
 * @brief :利用冒泡排序模拟实现qsort
 * @param nitems: 待排序对象的个数
 * @param size : 一个待排序对象的大小
*/

void mqsort(void *base, size_t nitems, size_t size, int (*cmp)(void *, void *)){
    int *arr = (int *)base;
    for (int i = 0; i < nitems - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < nitems - 1 - i; j++)
        {
            /*这里将base转为char*, 通过index和size来计算指针*/
            int res = cmp((char *)base + j * size, (char *)base + (j + 1) * size);
            if( res > 0){
                swap(base, j, j+1, size);
                flag = 1;
            }
        }
        if(flag == 0)break;
    }
    
}

/**
 * @brief 比较方法1
*/

int cmp1(void *p , void *q){
    return *(int*)p - *(int*)q;
}

/**
 * @brief 用于测试整型数组排序
*/
void test1(){
    int arr[] = {10, 9, 5, 3, 2, 6, 7, 8, 1, 4};
    mqsort(arr, sizeof(arr) / sizeof(int), sizeof(int), cmp1);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int cmp2(void *p, void *q){
    node* a = (node *)p;
    node* b = (node *)q;
    return strcmp(a, b);
}

void test2(){
    node arr[3] = {{"Oliver", 20}, {"Kurry", 34}, {"Bird", 45}};
    mqsort(arr, sizeof(arr) / sizeof(node), sizeof(node), cmp2);
    for(int i = 0; i < sizeof(arr) / sizeof(node); i++){
        puts(arr[i].name);          
    }
}

int main(){
    test1();
    test2();
    return 0;
}