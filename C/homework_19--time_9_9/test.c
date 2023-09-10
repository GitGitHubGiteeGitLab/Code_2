#include<stdio.h>

int main(){
    char arr[5][15] = { "i", "love", "c", "programming", "language" };
    printf("arr + 1    : %p\n", arr + 1);
    printf("arr[0] + 1 : %p\ns", arr[0] + 1);
    printf("arr[1]     : %p\n", arr[1]);
}