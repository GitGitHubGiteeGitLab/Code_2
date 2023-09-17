#include<stdio.h>
#include<string.h>
#include<errno.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 10; i++){
        printf("%d: %s\n", i, strerror(i));
    }

    FILE *fp = fopen("add.txt", "r");
    if(fp == NULL){
        printf("%d: %s\n", errno, strerror(errno));
        perror("error");
    }

    return 0;
}
