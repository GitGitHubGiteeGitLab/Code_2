#include <stdio.h>
#define N 120

int is_exists(char ch, char arr[]){
    int j = 0;
    while(arr[j]){
        if(ch == arr[j])
            return 1;
        j++;
    }
    return 0;
}

int main(){
    char arr1[N] = {0};
    char arr2[N] = {0};
    fgets(arr1, sizeof(arr1), stdin);
    fgets(arr2, sizeof(arr2), stdin);

    int i = 0;
    while(arr1[i] != '\0'){
       if(is_exists(arr1[i], arr2) == 0)
             putchar(arr1[i]);
        i++;
    }
    return 0;
}
