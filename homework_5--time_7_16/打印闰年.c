#include<stdio.h>
#include<math.h>

int main(){
    int flag = 0;
    for(int i = 1000; i <= 2000; i++){
        if(!((i % 4 == 0 && i % 100) || i % 400 == 0))continue;
        if(flag == 1)printf(" ");
        printf("%d", i);
        flag = 1;
    }
    printf("\n");
    return 0;
}