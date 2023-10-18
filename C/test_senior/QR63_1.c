#include<stdio.h>
#include<string.h>
#define N 128
int main(){
    char ASCII[N] = {0};
    char str1[N] = {0};
    char str2[N] = {0};
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    for(int i = 0; i < strlen(str2); i++){
        ASCII[str2[i]]++;
    }
    for(int i = 0; i < strlen(str1); i++){
        if(ASCII[str1[i]] != 0)continue;
        else putchar(str1[i]);
    }
    return 0;
}
