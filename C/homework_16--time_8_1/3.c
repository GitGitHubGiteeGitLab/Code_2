/*************************************************************************
	> File Name: 735.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 08:16:01 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for(int i = 0, j = 0, k = n - 1; i < n; i++){
        scanf("%d", arr1 + i);
        if(arr1[i] & 1)arr2[j++] = arr1[i];
        else arr2[k--] = arr1[i];
    }
    for(int i = 0; i < n; i++){
        i && putchar(' ');
        printf("%d", arr2[i]);
    }
    putchar('\n');
    return 0;
}
