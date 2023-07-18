#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int main() {
//   char ch[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
//   int i = 0;
//   int len = sizeof(ch)/sizeof(ch[0]);//利用sizeof求数组长
//   while(i < len){
//     printf("%c",ch[i++]);//更新计数器
//   }
//   return 0;
// }



// int main() {
//   char ch[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33,'\0'};//如果加了‘\0'sizeof计算式计算出的数组长度要加1，就要改为strlen求长度，这就想到直接让这串数字以字符串形式输出
//   int i = 0;
//   int len = strlen(ch);//利用sizeof求数组长
//   while(i < len){
//     printf("%c",ch[i++]);//更新计数器
//   }
//   return 0;
// }

int main() {
    char strings[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    printf("%s\n", strings);
    return 0;
}