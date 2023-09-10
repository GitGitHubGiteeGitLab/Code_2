#include <stdio.h>
/*
    从右上角开始
    reason: 小于往左走， 大于往下走
           从左上角开始，右边和下边都是比它大的数
*/
void _findnum(int find, int arr[4][4], int row, int col){
    int i = 0, j = 3;
    while(i != 4 && j != -1){
        if(find > arr[i][j])i++;
        else if(find < arr[i][j])j--;
        else {
            printf("下标为：(%d, %d)\n", i, j);
            return;
        }
    }
    printf("NO such number\n");
}


int main(){
    
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int col = sizeof(arr[0]) / sizeof(arr[0][0]), row = sizeof(arr) / sizeof(arr[0]);
    int find;
    while(scanf("%d", &find) == 1){ 
        _findnum(find, arr, row, col);
    }  
    
    return 0;
}