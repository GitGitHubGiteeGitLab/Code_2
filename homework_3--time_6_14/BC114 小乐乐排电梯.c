#include <stdio.h>

int main() {
    int num, time = 0;
    scanf("%d", &num);
    while (num > 11) {
        time += 4;
        num -= 12;
    }//小明前面有多于11个人就要等一个来回，一趟电梯使小明前面少12人
    time += 2;//上去还需12分钟
    printf("%d", time);
}