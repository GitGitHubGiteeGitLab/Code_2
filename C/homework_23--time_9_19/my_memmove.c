#include<stdio.h>
#include<assert.h>

/**
 * @brief:实现内存空间重叠情况下的内存拷贝
 * @param dest: void*
 * @param src: const void*
 * @param sz: size_t
 * @return:void* 
*/

void *my_memmove(void *dest, const void *src, size_t sz){
    void *ret = dest;
    assert(dest && src);

    if(dest < src){
        while(sz-- > 0){
            *(char *)dest = *(char *)src;
            dest = (char *)dest + 1;
            src = (char *)src + 1;
        }//while
    }else{
        while(sz-- > 0){
            *((char*)dest + sz) = *((char*)src + sz);
        }//while
    }
    return ret;
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    my_memmove(arr1, arr1 + 2, 20);
    printf("arr1 [");   
    for(int i = 0; i < sizeof(arr1) / sizeof(int); i++){
        i != 0 && printf(" ");
        printf("%2d", arr1[i]);
    }
    printf("]\n");
    
    my_memmove(arr1, arr1 + 2, 20);
    printf("arr1 [");   
    for(int i = 0; i < sizeof(arr1) / sizeof(int); i++){
        i != 0 && printf(" ");
        printf("%2d", arr1[i]);
    }
    printf("]\n");

    my_memmove(arr3, arr4 + 5, 20);
    printf("arr3 [");   
    for(int i = 0; i < sizeof(arr3) / sizeof(int); i++){
        i != 0 && printf(" ");
        printf("%2d", arr3[i]);
    }
    printf("]\n");
    return 0;
}