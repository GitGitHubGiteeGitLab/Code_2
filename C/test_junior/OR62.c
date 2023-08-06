#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define N 100

void reverse(char* left, char* right) {
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++, right--;
    }
}

int main() {
    char str[N + 5] = { 0 };
    gets(str);
    int len = strlen(str);
    //1.ÄæÐò×Ö·û´®
    reverse(str, str + len - 1);
    //2.ÄæÐò×Ö·û
    char* cur = str;
    while (*cur) {
        char* start = cur;
        while (*cur && *cur != ' ') {
            cur++;
        }
        char* end = cur - 1;
        reverse(start, end);
        if (*cur)cur++;
    }
    puts(str);
    return 0;
}