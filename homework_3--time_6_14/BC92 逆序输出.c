#include <stdio.h>
//利用数组实现逆序输出
//解决方案1：逆序输入，正向输出
int main() {
    int arr[10]={0};
    int i = 9;//一定要对i进行初始化
    while(i >= 0){
        scanf("%d ",&arr[i]);
        i--;
    }
    i++;
    while (i < 10) {
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}
//解决方案2：正向输入，逆序输出
// #include <stdio.h>
// int main(void) {
//     int arr[10] = {0};
//     int i = 0;
//     while (i < 10) {
//         scanf("%d ", &arr[i]);
//         i++;
//     }
//     i--;
//     while (i >= 0) {
//         printf("%d ", arr[i]);
//         i--;
//     }

//     return 0;
// }
