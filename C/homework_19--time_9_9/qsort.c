#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int _cmp1(const void *p, const void *q){
    return *(int*)p - *(int*)q;
}

typedef struct Student{
    char name[30];   // 学生姓名
    int Chinese;    // 语文成绩
    int Math;        // 数学成绩  
    int English;     // 英语成绩
}stu; 
int _cmp2(const void *p, const void *q){
    stu* ptr1 = (stu*)p;
    stu* ptr2 = (stu*)q;
    int sum = ptr1->Chinese + ptr1->Math + ptr1->English;
    int _sum = ptr2->Chinese + ptr2->Math + ptr2->English;
    return sum - _sum;
}

int _cmp3(const void *p, const void *q){
    return strcmp(*(char**)p, *(char**)q);
}

int _cmp4(const void *p, const void *q){
    return strcmp((char*)p, (char*)q);
}

void _test1(){
    int arr[] = { 40, 10, 100, 90, 20, 25 };
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), _cmp1);
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }//for
    printf("\n");
}

void _test2(){

    stu arr[] = {
         {"周",97,68,45},
        {"吴",100,32,88},
        {"郑",78,88,78},
        {"王",87,90,89},
        {"赵",87,77,66},
        {"钱",59,68,98},
        {"孙",62,73,89}
    };
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), _cmp2);

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        printf("%s:%d ", arr[i].name, arr[i].Chinese + arr[i].English + arr[i].Math);
    }
    printf("\n");
}

void _test3(){
    char *arr[5] = { "i", "love", "c", "programming", "language" };
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), _cmp3);
    
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        printf("%s ", arr[i]);
    }
    printf("\n");
}

void _test4(){
    char arr[5][15] = { "i", "love", "c", "programming", "language" };
    
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), _cmp4);
    
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        printf("%s ", arr[i]);
    }
    printf("\n");
}
void _test(){
    _test1();//int 数组排序
    _test2();//结构体排序
    _test3();//字符串指针数组排序
    _test4();//字符串二维数组排序
}

int main(){
    _test();
    return 0;
}