#include<stdio.h>

int main(){
    int flag = 0;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j <= i; j++){
            if(flag == 1)printf("  ");
            printf("%d * %d = %2d", j, i, j * i);
            flag = 1;
        }
        flag = 0;
        printf("\n");
    }
    return 0;
}