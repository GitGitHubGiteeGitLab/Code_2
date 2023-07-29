#include <stdio.h>
int day[13] ={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int days(int y, int m){
    if(m !=2)return day[m];
    if(y % 400 == 0 ||(y % 4==0 && y % 100))return day[m] + 1;
    return day[m];  
}

int main() {
    int y, m;
    while (scanf("%d %d", &y, &m) != EOF) { 
        printf("%d\n", days(y, m));
    }
    return 0;
}