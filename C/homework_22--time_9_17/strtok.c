#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char arr[] = "zengwei@yeah.net";
    char *p = "@.";

    char *s = NULL;
    for(s = strtok(arr, p); s != NULL; s = strtok(NULL, p)){
        printf("%s\n", s);
    }
    return 0;
}
