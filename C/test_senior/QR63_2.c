#include<stdio.h>
#include<string.h>
#define N 128
int main(){
    char ASCII[N] = {0};
    char str1[N] = {0};
    char str2[N] = {0};
    char str3[N] = {0};
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    for(int i = 0; i < strlen(str2); i++){
        ASCII[str2[i]]++;
    }
    int i = 0, j = 0;
    for(i = 0, j = 0; i < strlen(str1); i++){
        if(ASCII[str1[i]] != 0)continue;
        str3[j] = str1[i];
        j++;
    }
    str3[j] = '\0';
    puts(str3);
    return 0;
}
